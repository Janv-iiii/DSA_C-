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

    // Insert the node at the beginning
    int arr[] = {4, 5, 8, 6, 3, 9};
    for(int i = 0; i < 6; i++){  // corrected loop condition
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = Head; // Link new node to the beginning of the list
        Head = temp; // Move head to the new node
    }

    // Print the linked list
    Node *temp = Head;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }

    return 0;
}


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node *head = NULL;
    int arr[]={5,34,87,23,90};
    for(int i=0;i<5;i++){
        Node *temp = new Node (arr[i]);
        temp->next = head;
        head = temp;
        
    }

    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
