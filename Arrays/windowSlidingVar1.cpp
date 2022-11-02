#include<bits/stdc++.h>
using namespace std;

//Given an unsorted array of non-negative int.Check if there is subarray with given sum.
bool isSum(int arr[],int n,int sum){
    int curr_sum=arr[0];
    int s=0;
    for(int i=1;i<n;i++){
        while(curr_sum>sum && s<i-1){
            curr_sum-=arr[s];
            s++;
        }
        if(curr_sum==sum){
            return true;
        }
        if(i<n){
            curr_sum+=arr[i];
        }
    }
    return (curr_sum==sum);
}


int main(){
    int arr[50],n,sum;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of sum"<<endl;
    cin>>sum;
    cout<<isSum(arr,n,sum);
    return 0;
}