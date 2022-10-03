#include<bits/stdc++.h>
using namespace std;

int delMid(int arr[],int n){
    int mid=n/2;
    for(int i=mid;i<n-1;i++){
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
    delMid(arr,n);
    return 0;
}