#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int value){
        data = value;
        next =NULL ;
    }
};
int main(){
    Node *Head;
    Head = NULL;

    int arr[]={2,6,4,5,7};
    //Insert at any position 

    int x = 3; //insert position 
    int value = 30;

    Node *temp;
    temp=Head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node *temp2= new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    //to print
    Node *temp;
    temp = Head;

    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }

}


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *Head = NULL;
    int arr[]={54,7,32,4,1};

    int x =3;
    int value = 40;
    
    Node *temp;
    temp = Head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next=temp2;
}









