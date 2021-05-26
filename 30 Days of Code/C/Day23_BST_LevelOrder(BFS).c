#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

    int max(int a, int b)
    {
        return a>b ? a : b;
    }
    
    int height(Node* root){
        if(root == NULL)return 0;
        
        return 1+max(height(root->left), height(root->right));
        
    }
    
    void Print(Node* root, int h)
    {
        if(root == NULL)return ;
        if(h == 1)printf("%d ", root->data);
        else if(h > 1){
            Print(root->left, h-1);
            Print(root->right, h-1);
        }
    }

    void levelOrder(Node * root){
        int h = height(root);
        for(int i=1; i<=h; i++){
            Print(root, i);
        }
    
    }

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}