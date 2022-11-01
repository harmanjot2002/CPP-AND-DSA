#include<bits/stdc++.h>
using namespace std;

void swapAlternates(int arr[],int n){
    for(int i=0;i<n;i+=2){
        //If next element exists
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    swapAlternates(arr,n);    
    return 0;
}

//Time Complexity: O(n)