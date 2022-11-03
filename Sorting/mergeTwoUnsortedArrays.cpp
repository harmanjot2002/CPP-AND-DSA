#include<bits/stdc++.h>
using namespace std;

int mergeAndSort(int arr[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr[i]<=arr2[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){
    int arr[50],arr2[50],n,m;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of elements in second array"<<endl;
    cin>>m;
    cout<<"Enter elements of second array"<<endl;
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    
    cout<<mergeAndSort(arr,arr2,n,m);    
    return 0;
}