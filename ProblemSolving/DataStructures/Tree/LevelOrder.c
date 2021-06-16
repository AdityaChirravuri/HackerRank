#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/

int height(struct node* root)
{
    int right, left;
    
    if(root== NULL)return 0 ;
    else {
    right= height(root->right);
    left = height(root->left);
    
    if(right >left)return right+1;
    else return left+1;
    }
}

void print(struct node* root, int i){
    if(root == NULL) return;
    
    if(i == 1)printf("%d ", root->data);
    else if(i > 1){
        print(root->left, i-1);
        print(root->right, i-1);
        
    }
}

void levelOrder( struct node *root) {
    int h = height(root);
    int i;
    
    for(i=1; i<=h; i++){
        print(root, i);        
    }
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
  
	levelOrder(root);
    return 0;
}
