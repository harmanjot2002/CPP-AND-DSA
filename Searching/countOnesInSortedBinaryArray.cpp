#include<bits/stdc++.h>
using namespace std;

int countOne(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]){
                return (n-mid);
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[50],n,x;
    cout<<"Enter number of elements in sorted array"<<endl;
    cin>>n;
    cout<<"Enter elements of sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countOne(arr,n);
    return 0;
}

//Time Complexity: O(log n)
//Space Complexity: O(1)