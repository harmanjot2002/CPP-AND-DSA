#include<bits/stdc++.h>
using namespace std;

int secondLargest(int n,int arr[]){
    int res=-1,largest=0;
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
    int n,arr[50];
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargest(n,arr);
    return 0;
}