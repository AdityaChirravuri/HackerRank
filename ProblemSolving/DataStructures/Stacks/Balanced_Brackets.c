#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node{
char data;
struct node* next;
};

bool Brackets(struct node* head, char* );
int size(struct node* head);
char check(struct node* );
void push(struct node** head, char s);
void pop(struct node** );

int main()
{
  int t;
  struct node* head;
  scanf("%d", &t);

  while(t!=0){
    head = NULL;
    char str[100];
    printf("ENTER A STRING: ");

    scanf("%s", str);

    if(Brackets(head, str))printf("yes");
    else printf("no");

    printf("\n\n");

    t--;
  }

}

bool Brackets(struct node* head, char *str)
{
    int i, n;

    n = strlen(str);

    for(i=0; str[i]!='\0'; i++){
        char temp = str[i];
        if (temp == '{' || temp == '(' || temp == '['){
                push(&head, temp);
        }

        if(temp == '}' || temp == ')' || temp == ']'){
            if(size(head) == 0)return false;
            else{
                char c = check(head);
                if(c == '{' && temp == '}')pop(&head);
                else if(c == '(' && temp == ')')pop(&head);
                else if(c == '[' && temp == ']')pop(&head);
                else return false;
            }
        }
    }
    if(size(head) == 0)return true;
    else return false;
}

void push(struct node** head, char s){

    struct node* newnode;

    newnode = (struct node* )malloc(sizeof(struct node));

    newnode->data = s;
    newnode->next = NULL;

    newnode->next  = *head;
    *head = newnode;

    return ;
}

int size(struct node* head)
{
    int n=0;
    while(head != NULL){
        n++;
        head= head->next;
    }

    return n;
}

char check(struct node* h)
{
    char temp = h->data;
    return temp;
}

void pop(struct node** h)
{
    if(h == NULL)exit(0);

    struct node* temp;
    temp = *h;
    *h = (*h)->next;
    free(temp);

}
