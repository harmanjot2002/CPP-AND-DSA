#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int a[len1];
    int b[len2];
    for(int i=0;i<len1;i++){
        a[i]=arr[s+i];
    }
    for(int i=0;i<len2;i++){
        b[i]=arr[len1+i];
    }
    int i,j,k=0;
    while(i<len1 && j<len2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<len1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<len2){
        arr[k]=b[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
   
}



int main(){
     int arr[50],n,s,e;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}