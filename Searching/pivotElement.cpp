#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[0]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}

int main(){
    int arr[50],n,x;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<pivotElement(arr,n);
    return 0;
}