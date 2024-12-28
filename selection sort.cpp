#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements you want to enter:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);

    }
    //Here is the sorted array
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

