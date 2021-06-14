/// deleting an element from the given position
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void append(struct Node** head_ref, int new_data);
void print(struct Node* t);
void delete_element(struct Node** head_ref, int pos);

int main()
{
    int n, data, pos;
    struct Node* head = NULL;
    printf("ENTER NUMBER OF ELEMENTS IN THE LINKED LIST: ");
    scanf("%d", &n);
    while(n!=0){
        printf("ENTER DATA: ");
        scanf("%d", &data);
        append(&head, data);
        n--;
    }
    print(head);

    printf("\nENTER THE POSITION TO BE DELETED: ");
    scanf("%d", &pos);
    delete_element(&head, pos);
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
        printf("%d->", t->data);
        t = t ->next;
    }
}

void delete_element(struct Node** head_ref, int pos)
{
    struct Node* temp = *head_ref;
    int i=0;
    while(temp!=NULL && i != pos-1){
        temp = temp->next;
        i++;
    }
    if(temp == NULL || temp->next ==NULL)printf("NO ELEMENTS IN THE LINKED LIST\nOVERFLOW!!!!");
    else{
    struct Node* last = temp->next->next;

    free(temp->next);

    temp->next  = last;

    printf("\nLINKED LIST AFTER DELETING %d POSITION IS: \n", pos);
    print(*head_ref);

    }
}
