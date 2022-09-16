#include<bits/stdc++.h>
using namespace std;

int mxLnEvnOddSubar(int arr[],int n){
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
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
    cout<<mxLnEvnOddSubar(arr,n);
     
    return 0;
}