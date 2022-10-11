#include<bits/stdc++.h>
using namespace std;

bool isSortedRotated(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count<=1;
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSortedRotated(arr,n); 
    return 0;
}