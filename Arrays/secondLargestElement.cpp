#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
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
    cout<<secondLargest(arr,n);
    return 0;
}