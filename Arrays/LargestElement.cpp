#include<bits/stdc++.h>
using namespace std;

int maxim(int arr[],int n){
    int maxim=INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>maxim){
            maxim=arr[i];
        };
    }
    return maxim;
}

int main(){
    int n,arr[50];
    cout<<"Enter number of elements in an array"<<" ";
    cin>>n;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxim(arr,n);
    return 0;
}