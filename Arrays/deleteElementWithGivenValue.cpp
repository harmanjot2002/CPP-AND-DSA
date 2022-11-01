#include<bits/stdc++.h>
using namespace std;

int del(int arr[],int n,int ele){
    int idx;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==ele){
            break;
        }
        idx=i;
    }
    for(int j=idx;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n,ele;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be deleted"<<endl;
    cin>>ele;
    del(arr,n,ele);
    return 0;
    return 0;
}

//Time Complexity: O(n)