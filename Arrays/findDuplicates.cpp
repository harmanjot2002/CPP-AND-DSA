#include<bits/stdc++.h>
using namespace std;

int findDuplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
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
    findDuplicates(arr,n);    
    return 0;
     
    return 0;
}

//Time Complexity: O(n^2)