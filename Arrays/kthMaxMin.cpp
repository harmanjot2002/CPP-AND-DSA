#include<iostream>
#include<algorithm>
using namespace std;

int kthMin(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        sort(arr,arr+n);
    }
    cout<<arr[k-1]<<endl;
}

int kthMax(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        sort(arr,arr+n,greater<int> ());
    }
    cout<<arr[k-1]<<endl;
}

int main(){
    int arr[50],n,k;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k"<<endl;
    cin>>k;
    kthMax(arr,n,k);
    kthMin(arr,n,k);
     
    return 0;
}