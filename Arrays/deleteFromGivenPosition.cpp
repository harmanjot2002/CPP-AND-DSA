#include<bits/stdc++.h>
using namespace std;

int del(int arr[],int n,int pos){
    int ind=pos-1;
    for(int i=ind;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n,pos;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter position of element to be deleted"<<endl;
    cin>>pos;
    del(arr,n,pos);
    return 0;
}