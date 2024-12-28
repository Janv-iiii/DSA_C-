#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void enqueue(int val){
    if(rear>=n-1){
        cout<<"Overflow"<<endl;
    }
    else{
        if(front==-1){
            front=0;
            rear++;
            queue[rear]=val;
        }
    }
}
void dequeue(){
    if(front==-1||front>rear){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        cout<<"The dequeued element is:"<<queue[front]<<endl;
        front++;
    }
}
void display(){
    if(front==-1||front>rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"elements are:"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int ch,val;
    cout<<"1)Enqueue elements"<<endl;
    cout<<"2)Dequeue elements"<<endl;
    cout<<"3)Display Queue"<<endl;
    cout<<"4) Exit"<<endl;

    do{
        cout<<"Enter a choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"enter the value to be enqueued"<<endl;
                cin>>val;
                enqueue(val);
                break;
            }

            case 2:{
                dequeue();
                break;
            }

            case 3:{
                display();
                break;
            }

            case 4:{
                cout<<"Exit"<<endl;
            }

        }
    }while(ch!=4);
    return 0;
}



