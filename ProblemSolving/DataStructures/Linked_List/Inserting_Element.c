/// ADDING ELEMENT AT A VARIABLE POSTION
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)last = last->next;

    last->next = new_node;
    return;
}

void print(struct node* t)
{
    while(t!= NULL){
        printf("%d ", t->data);
        t = t ->next;
    }
}

void insert(struct node** head_ref, int pos, int new_data)
{
    int find=0;
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref;
    struct node* temp;

    while(1){
        if(find==pos){
          temp =last;
          break;
        }
        find++;                             /// finding the position to be inserted
        last = last->next;
    }
    new_node->data  = new_data;             /// assigned new data to the new node
    new_node->next = temp->next;
    temp->next = new_node;

}

int main()
{
    struct node* head = NULL;
    int n, k, pos;
    printf("ENTER SIZE OF THE LINKED LIST: ");
    scanf("%d", &n);
    printf("ENTER THE POSITION WHERE THE ELEMENT MUST BE ADDED: ");
    scanf("%d", &pos);
    printf("ENTER ELEMENT TO BE ADDED: ");
    scanf("%d", &k);
    while(n!=0){
        int data;
        printf("ENTER DATA: ");
        scanf("%d", &data);
        append(&head, data);
        n--;
    }
    printf("THE LINKED LIST IS\n");
    print(head);
    printf("\n\n");
    insert(&head, pos, k);
    printf("THE LINKED LIST IS AFTER INSERTION OF %d AFTER THE %d POSTION IS\n", k, pos);
    print(head);
    return 0;
}
