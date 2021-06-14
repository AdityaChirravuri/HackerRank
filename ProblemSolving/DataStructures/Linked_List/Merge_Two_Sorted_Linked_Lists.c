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
    int n, m;
    struct Node* head1= NULL;
    struct Node* head2= NULL;
    int data;
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
        printf("LINKED LIST 1 IS: \n");
        print(head1);
        printf("\nLINKED LIST 2 IS: \n");
        print(head2);

    ///the curent logic fails
    /*struct Node* t= head2;
    struct Node* temp;
    struct NODE* last;

    while(t!=NULL){
        last = t;
        t = t->next;
    }
    t = head2;
    if(head1->data==t->data){
        temp = head1->next;
        head1->next = head2;
        last->next = temp;
    }*/

    /// this logic is true but need to understand

    /*
    Node* MergeLists(Node *headA, Node* headB)
{
    if (headA == NULL && headB == NULL) {
        return NULL;
    }

    if (headA == NULL) {
        return headB;
    }

    if (headB == NULL) {
        return headA;
    }

    // Ensure that list A starts with the smaller number
    if (headA->data > headB->data) {
        Node *tmp = headB;
        headB = headA;
        headA = tmp;
    }

    Node *listHead = headA;

    while (headB) {
        // Advance through nodes in list A until the next node
        // has data bigger than data at current node of list B
        while (headA->next != NULL &&
               headB->data > headA->next->data) {
            headA = headA->next;
        }

        // Insert current node in list B into list A
        Node* nextB = headB->next;
        headB->next = headA->next;
        headA->next = headB;
        headB = nextB;
    }

    return listHead;
}

    */
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
