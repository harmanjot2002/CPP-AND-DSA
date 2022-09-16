#include<bits/stdc++.h>
using namespace std;

int mxSumSubarr(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
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
    cout<<mxSumSubarr(arr,n);
     
    return 0;
}