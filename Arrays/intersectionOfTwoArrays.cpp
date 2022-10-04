#include<bits/stdc++.h>
using namespace std;

int intersectUnsorted(int arr[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        int ele=arr[i];
        for(int j=0;j<m;j++){
            if(ele==arr2[j]){
                cout<<arr2[j];
            }
        }
    }
}
//Time Complexity: O(n^2)

int intersectSorted(int arr[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while (i<n && j<m){
        if(arr[i]==arr2[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<arr[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
//Time Complexity: O(n)

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[50],m;
    cout<<"Enter number of elements in array"<<endl;
    cin>>m;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    intersectSorted(arr,arr2,n,m);  
    intersectUnsorted(arr,arr2,n,m);      
    return 0;
}