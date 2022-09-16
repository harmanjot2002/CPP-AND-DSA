#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    for(int i=1;i<n-1;i++){
        res+=(min(lmax[i],rmax[i])-arr[i]);
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
    cout<<getWater(arr,n);
     
    return 0;
}