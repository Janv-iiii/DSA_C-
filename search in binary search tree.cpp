#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node *insert(Node *root,int target){
    if(!root){
        Node *temp=new Node(target);
        return temp;
    }
    else if(target<root->data){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;

}

bool search(Node *root,int target){
    if(!root){
        return 0;
    }

    if(root->data==target){
        return 1;
    }

    if(root->data>target){
        return search(root->left,target);
    }

    else{
        return search(root->right,target);
    }
}
int main(){
    int arr[]={2,9,3,2,56,98,34,0,1};
    Node *root=NULL;

    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }

    //searching
    cout<<endl;
    cout<<search(root,56)<<endl;
}


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
        Node *temp = new Node(target);
        return temp;
    }
    else if(target<root->data){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}

bool search(Node *root,int target){
    if(!root){
        return 0;
    }
    else if(root->data == target){
        return 1;
    }

    else if(root->data>target){
        return search(root->left,target);
    }
    else{
        return search(root->right,target);
    }
}
int main(){
    int arr[]={3,76,34,67,23,87,5,67,2,1};
    Node *root = NULL;

    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }

    search(root,87);
}



