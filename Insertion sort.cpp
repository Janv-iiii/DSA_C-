#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements which you want to enter:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //insertion sort 
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    //sorted array
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}


