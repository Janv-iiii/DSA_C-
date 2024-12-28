#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node (int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node *Head, *Tail;
    Tail = Head = NULL;

    // Insert values at the end of the linked list
    int arr[] = {2, 3, 4, 1, 8};
    for(int i = 0; i < 5; i++){
        // When linked list is empty
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head; // Set Tail to Head after initializing the first node
        }
        else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next; // Move Tail to the new end node
        }
    }

    // Print the linked list
    Node *temp = Head; // Initialize temp to Head

    while(temp){
        cout << temp->data << " ";
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
    Node (int value ){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *Head,*Tail;
    Head = Tail = NULL;

    int arr[]={65,32,65,7,1};
    for(int i=0;i<5;i++){

        if(Head == NULL){
            Head = new Node(arr[i]);
        }

        else{
            Tail->next = new Node(arr[i]);
            Tail  = Tail ->next;
        }

    }

    Node *temp = Head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}