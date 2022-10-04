#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
        return true;
    }
}

int main(){
    int n,arr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr,n); 
    return 0;
}
//Time Complexity: O(n)