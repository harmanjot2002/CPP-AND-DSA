#include<bits/stdc++.h>
using namespace std;

int delEnd(int arr[],int n){
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    delEnd(arr,n);
    return 0;
}