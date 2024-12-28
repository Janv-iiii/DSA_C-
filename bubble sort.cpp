#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements you want to enter:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //printing the sorted array
    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}


