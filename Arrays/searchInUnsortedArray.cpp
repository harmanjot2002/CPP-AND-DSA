#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[4]={2,3,4,5};
    cout<<search(arr,4,3);     
    return 0;
}

//Time Complexity: O(n)