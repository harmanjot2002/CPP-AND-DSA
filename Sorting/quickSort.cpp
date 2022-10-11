#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s;int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

int quickSort(int arr[],int s,int e){
    
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    
}

int main(){
    
      int arr[50],n,s,e;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<quickSort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}