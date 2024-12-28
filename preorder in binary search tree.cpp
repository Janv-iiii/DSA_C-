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
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={4,87,56,34,43,65,2,0,1};
    Node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }

    //preorder
    cout<<"Preorder triversal of BST";
    preorder(root);
    cout<<endl;

    return 0;


}