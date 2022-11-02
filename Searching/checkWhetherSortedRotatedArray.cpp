#include<bits/stdc++.h>
using namespace std;

bool checkSortedRotated(int arr[],int n){
    //Array is said to be sorted and rotated if there exists either none or one eleent such that it is smaller than its previous element.
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count<=1;
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<checkSortedRotated(arr,n);
     
    return 0;
}