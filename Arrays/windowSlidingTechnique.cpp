#include<bits/stdc++.h>
using namespace std;

int windowSliding(int arr[],int n,int k){
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum+=arr[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<n;i++){
        curr_sum+=(arr[i]-arr[i-k]);
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int arr[50],n,k;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k"<<endl;
    cin>>k;
    cout<<windowSliding(arr,n,k);
    return 0;
}