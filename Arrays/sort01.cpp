#include<bits/stdc++.h>
using namespace std;

void sort01(int arr[],int n){
    int left=0;
    int right=n-1;
    if(left<=right){
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1){
            right--;
        }
        if(arr[left]==1 && arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,0,0,1,0};
    sort01(arr,5);  
    return 0;
}