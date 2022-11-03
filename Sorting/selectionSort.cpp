#include<bits/stdc++.h>
using namespace std;

//In selection sort,we try to place smallest element at its correct position.
//Time Complexity:O(n^2)
//Not Stable
//In-place

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    selectionSort(arr,n);
     
    return 0;
}