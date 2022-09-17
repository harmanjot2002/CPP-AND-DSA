#include<bits/stdc++.h>
using namespace std;

int bin(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else if(arr[mid]==x){
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[50],n,x;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched"<<endl;
    cin>>x;
    cout<<bin(arr,n,x);
     
    return 0;
}