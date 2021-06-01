import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{

public static int max(int a, int b)
    {
        return a>b ? a : b;
    }
    
    public static int height(Node root){
        if(root == null)return 0;
        
        return 1+max(height(root.left), height(root.right));
        
    }
    
    public static void Print(Node root, int h)
    {
        if(root == null)return ;
        if(h == 1)System.out.printf("%d ", root.data);
        else if(h > 1){
            Print(root.left, h-1);
            Print(root.right, h-1);
        }
    }

    public static void levelOrder(Node root){
        int h = height(root);
        for(int i=1; i<=h; i++){
            Print(root, i);
        }
    }

public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}