#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0],minval=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    return res;
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxDiff(arr,n);
     
    return 0;
}