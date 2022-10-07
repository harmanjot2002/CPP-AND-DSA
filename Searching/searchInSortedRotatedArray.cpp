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

int binarySearch(int arr[],int x,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else if(arr[mid]==x){
            return mid;
        }
    }
    return -1;
}

int searchInSortedRotated(int arr[],int n,int target){
    int pivot=pivotElement(arr,n);
    if(target>=arr[pivot] && target<=arr[n-1]){
        return binarySearch(arr,target,pivot,n-1);
    }
    else{
        return binarySearch(arr,target,0,pivot-1);
    }
}

int main(){
    int arr[50],n,target;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Enter value of target"<<endl;
    cin>>target;
    cout<<searchInSortedRotated(arr,n,target);
    return 0;
}