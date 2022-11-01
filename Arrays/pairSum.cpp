#include<bits/stdc++.h>
using namespace std;

int pairSum(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    pairSum(arr,5,6);     
    return 0;
}

//Time Complexity:O(n^2)