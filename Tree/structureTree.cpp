
#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* left;
    Node * right;
    
    Node(int d){
        this->data= d;
        this->left=NULL;
        this->right=NULL;
        
    }
};
Node * buildTree(Node * root){
    cout<<"Enter the root data"<<endl;
    int data;
    cin>>data;
    if(data==-1) return NULL;
    root=new Node(data);
    
    cout<<"Enter the data of leftside"<<data;
    root->left=buildTree(root->left);
    
    cout<<"enter the data of rightSide"<<data;
    root->right=buildTree(root->right);
    return   root;
    
}
// PREORDER
Node * preOrder(Node * root)
{
    if(root==NULL ) return NULL;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return root;
}
// POSTORDER
Node * postOrder(Node * root)
{
    if(root==NULL ) return NULL;
    
    
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
    return root;
}
// INORDER
Node * inOrder(Node * root)
{
    if(root==NULL ) return NULL;
    
    
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
    return root;
}



int main()
{
    Node * root= NULL;
    root=buildTree(root);
    
    preOrder(root);
    postOrder(root);
    inOrder(root);
    

    return 0;
}