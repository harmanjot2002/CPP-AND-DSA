#include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n){
    int res=1;//this is current size of new array with distinct elements
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removeDup(arr,n);
     
    return 0;
}