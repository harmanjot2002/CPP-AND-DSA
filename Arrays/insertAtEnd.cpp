#include<bits/stdc++.h>
using namespace std;

int insertEnd(int arr[],int n,int x){   
    arr[n]=x;
    for(int i=0;i<n+1;i++){            
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,x,arr[50];
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to be inserted"<<endl;
    cin>>x;
    insertEnd(arr,n,x);
    return 0;
}

//Time Complexity: O(1)