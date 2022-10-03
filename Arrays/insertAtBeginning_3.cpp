#include<bits/stdc++.h>
using namespace std;

int insertBegin(int arr[],int n,int x){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n,x;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be inserted"<<endl;
    cin>>x;
    insertBegin(arr,n,x);
    return 0;
}