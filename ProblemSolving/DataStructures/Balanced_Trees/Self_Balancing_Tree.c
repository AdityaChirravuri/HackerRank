/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

node* newnode(int val)
{
  node* temp;
  temp = (node *)malloc(sizeof(node));
  temp->val = val;
  temp->left = temp ->right = NULL;
  temp->ht = 0;

  return temp;
}

int max(int c, int b)
{
  return c>b ? c : b;
}

int height(node *N)
{
    if (N == NULL) return -1;
    return N->ht;
}

node* Right_Rotate(node** y){

  node *x = (*y)->left;
  node *T2 = x->right;

  x->right = *y;
  (*y)->left = T2;
  // Update heights

  (*y)->ht = max(height((*y)->left), height((*y)->right))+1;
  x->ht = max(height(x->left), height(x->right))+1;

  return x;
}

node* Left_Rotate(node** x ){

  node *y = (*x)->right;
  node *T2 = y->left;
  y->left = *x;
  (*x)->right = T2;

 // update height

  (*x)->ht = max(height((*x)->left), height((*x)->right))+1;
  y->ht = max(height(y->left), height(y->right))+1;

  return y;
}

int balance(node* temp){
  if(temp ==  NULL)return 0;
  return  height(temp->left) - height(temp->right);
}
node* Insert(node** root , int val){

  // base case if root is null
    if(*root == NULL){
    *root = newnode(val);
    }
    
    if((*root) -> val >val)(*root)->left = Insert((&(*root)->left), val);
    
    if((*root) ->val < val)(*root)->right = Insert((&(*root)->right), val);

    (*root)->ht = 1+ max(height((*root)->left), height((*root)->right));  

    int b = balance(*root);
    
    if(b >=2 &&(val < ((*root)->left->val)))
    return Right_Rotate(&*root);
    
    if(b <= -2 && (val > ((*root)->right->val)))
    return Left_Rotate(&*root);

    if(b >= 2 &&(val > ((*root)->left->val))){
    (*root)->left = Left_Rotate(&(*root)->left);
    *root =  Right_Rotate(&*root);
    }
    
    if(b <= -2 && (val < ((*root)->right->val))){
    (*root)->right = Right_Rotate(&(*root)->right);
    *root =  Left_Rotate(&*root);
    }

    return *root;
}


node * insert(node * root,int val)
{
	root = Insert(&root, val);
    return root;
}
