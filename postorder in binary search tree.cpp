#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node (int value){
        data=value;
        left=right=NULL;
    }
    
};
Node *insert(Node *root,int target){
    if(!root){
        Node *temp=new Node(target);
        return temp;
    }
    else if(root->data>target){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}

void preorder(Node *root){
    if(!root){
        return;
    }

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<endl;
}
int main(){
    int arr[]={56,43,34,78,87,90,21,1,0};
    Node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    //postorder
    preorder(root);
}