#include <stdio.h>
#include <stdlib.h>

struct LinkedListNode{
    int data;
    struct node *next;
};

typedef struct LinkedListNode node;

void append(node** , int );      //passing the data by reference
void print(node* );
void Delete(node** );

int main()
{
    int n, data;
    node* head = NULL;
    printf("ENTER NUMBER OF ELEMENTS IN THE LINKED LIST: ");
    scanf("%d", &n);
    while(n!=0){
        printf("ENTER DATA: ");
        scanf("%d", &data);
        append(&head, data);
        n--;
    }
    printf("BEFORE REVERSING THE LINKED LIST: \n");
    print(head);
    
    printf("\nAFTER REVERSING THE LIST: \n");
    Reverse(head);
    print(head);
    return 0;
}

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

void print(struct node* head_ref)
{
    while(t!=NULL){
        printf("%d ", t->data);
        t= t->next;
    }
}

void Delete(struct node** head_ref)
{
    struct node* k = *(head_ref);
    struct node* t = NULL;
     while(k!=NULL){
        struct node*last=(struct node*)malloc(sizeof(struct node));;
        last->data = k->data;
        last->next = t;
        t = last;
        k= k->next;
    }
}
