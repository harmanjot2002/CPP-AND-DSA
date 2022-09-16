#include<bits/stdc++.h>
using namespace std;

int consOnes(int arr[],int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<consOnes(arr,n);
     
    return 0;
}