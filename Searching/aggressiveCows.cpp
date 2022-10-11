#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = arr[0];
    
    for(int i=0; i<n; i++ ){
        
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int k,int n)
{
    sort(arr,arr+n);
   	int s = 0;
    int e=arr[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(arr, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[50],n,m;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Enter number of cows"<<endl;
    cin>>m;
    cout<<aggressiveCows(arr,m,n);
     
    return 0;
}