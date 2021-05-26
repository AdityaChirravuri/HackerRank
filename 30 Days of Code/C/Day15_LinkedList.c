#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    Node* Newnode;
    Newnode = (Node *)malloc(sizeof(Node));
    Newnode->data = data;
    Newnode->next = NULL;

    if(head == NULL){
        head = Newnode;
        return head;
    }else{
        Node* cur = head;
        while(cur->next)
            cur= cur->next;
        cur->next = Newnode;
    }

    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);

}
