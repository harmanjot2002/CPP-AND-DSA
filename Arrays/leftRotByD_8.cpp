#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[],int low,int high){
    while (low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int leftByD(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[50],n,d;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of elements to be rotated"<<endl;
    cin>>d;
    cout<<leftByD(arr,n,d);
     
    return 0;
}