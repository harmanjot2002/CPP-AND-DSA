#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[50],n,k;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);    
    return 0;
}