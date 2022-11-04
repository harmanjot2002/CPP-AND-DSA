#include<bits/stdc++.h>
using namespace std;

int freq(int arr[],int n){
    int freq=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            cout<<arr[i-1]<<" "<<freq<<endl;
            freq=1;
        }
    }
    if(n==1 || (arr[n-1]!=arr[n-2])){
        cout<<arr[n-1]<<" "<<1;
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
    freq(arr,n);
    return 0;
}

//Time Complexity: O(n)