#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* next;
struct node* prev;
};

void print(struct node* t);
void append(struct node** head_ref, int new_data);
void insert_after(struct node** head_ref, struct node* prev_node, int new_data);
struct node* Find(struct node** head_ref, int val);

int main()
{
    int t, n, k, val;
    struct node* head = NULL;
    scanf("%d", &t);
    ///enter number of nodes in the linked list
    scanf("%d", &n);
    for(int i=0; i<t; i++){
        struct node* head = NULL;
        for(int j=0; j<n; j++){
            scanf("%d", &val);
            append(&head, val);
        }
    /// enter the value to be added
        scanf("%d", &k);
        struct node* prev_node = Find(&head, val);
        insert_after(&head, prev_node, k);
        print(head);
    }

    return 0;
}

void insert_after(struct node** head_ref, struct node* next_node, int val)
{
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;

    new_node->prev = next_node->prev;

    next_node->prev = new_node;

    new_node->next = next_node;

    if (new_node->prev != NULL)new_node->prev->next = new_node;
}

struct node* Find(struct node** head_ref, int val)
{
    struct node* temp = *(head_ref);
    while(temp!=NULL){
        if(val>temp->data)return temp;
        temp = temp->next;
    }
}

void print(struct node* t)
{
    while(t!=NULL){
     printf("%d<->", t->data);
     t = t->next;
    }
}

void append(struct node** head_ref, int new_data)
{
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head_ref;
    new_node->data = new_data;

    new_node->next = NULL;

    if(*head_ref==NULL){
        new_node->prev = NULL;
        *head_ref=new_node;
        return;
    }
    else{

        while (last->next != NULL){
            last = last->next;
        }

    last->next = new_node;
    new_node->prev = last;
    return;
    }
}
