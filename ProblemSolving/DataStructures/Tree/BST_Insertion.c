#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
  
	if( root == NULL ) 
      return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
  
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node* Newnode(int data)
{
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    
    temp->data = data;
    temp->left = temp->right = NULL;
    
    return temp;
    
}

struct node* insert( struct node* root, int data ) {
	
    // base case
    if(root == NULL)root = Newnode(data);
    
    // if the entering value is greater 
    // then go to right subtree 
    if(root->data < data){
        // check whether right is NULL 
        // if it is not NULL then tranverse
        if(root->right!=NULL)root->right = insert(root->right, data);
        
        // if null add the element
        else{
        struct node* R_temp;
        R_temp = Newnode(data);
        root->right = R_temp;
        }
    }
    
    // if entering value is less
    // then go to left subtree
    if(root->data > data){
        
        // check whether right is NULL 
        // if it is not NULL then tranverse
        if(root->left != NULL)root->left = insert(root->left, data);
        
        // if null add the element
        
        else {
        struct node* L_temp;
        L_temp = Newnode(data);
        root->left = L_temp;
        }
    } 
    
    return root;
}




int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}
