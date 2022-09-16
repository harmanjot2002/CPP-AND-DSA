#include<bits/stdc++.h>
using namespace std;

int insertMid(int arr[],int n,int x){
    int mid=n/2;
    for(int i=n;i>mid;i--){
        arr[i]=arr[i-1];
    }
    arr[mid]=x;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){
    int arr[50],n,x;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be inserted"<<endl;
    cin>>x;
    insertMid(arr,n,x);
    return 0;
}