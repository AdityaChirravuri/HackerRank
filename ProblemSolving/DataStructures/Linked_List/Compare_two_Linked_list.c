///this is a incomplete code please check hackerrank to get a perfect solution///
#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};

void print(struct Node* t);
void append(struct Node** head_ref, int new_data);

int main()
{
    int t, n, m;
    printf("ENTER NUMBER OF TEST CASES: ");
    scanf("%d", &t);
    for(int i=0; i<t; i++){
    struct Node* head1= NULL;
    struct Node* head2= NULL;
    int data;
        printf("TEST CASE %d\n", i+1);
        printf("LINKED LIST 1: \n");
        printf("ENTER SIZE: ");
        scanf("%d", &n);
        while(n!=0){
            printf("ENTER DATA: ");
            scanf("%d", &data);
            append(&head1, data);
            n--;
        }   ///END OF WHILE LOOP
        printf("LINKED LIST 2: \n");
        printf("ENTER SIZE: ");
        scanf("%d", &m);
        while(m!=0){
            printf("ENTER DATA: ");
            scanf("%d", &data);
            append(&head2, data);
            m--;
        }/// END OF 2 WHILE LOOP

        print(head1);
        printf("\n");
        print(head2);
        printf("\n");

        if(n==m)printf("%d", 1);
        else printf("%d", 0);

    }/// THIS FOR "FOR" LOOP
    return 0;
}

void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
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

void print(struct Node* t)
{
    while(t!= NULL){
        printf("%d ", t->data);
        t = t ->next;
    }
}
