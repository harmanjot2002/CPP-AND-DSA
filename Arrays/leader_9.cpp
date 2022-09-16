#include<bits/stdc++.h>
using namespace std;

int leader(int arr[],int n){
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leader(arr,n);
     
    return 0;
}