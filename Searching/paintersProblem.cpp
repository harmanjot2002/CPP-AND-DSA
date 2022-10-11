#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int paintersCount = 1;
    int boardSum = 0;
    for(int i = 0; i<n; i++) {
        if(boardSum + arr[i] <= mid) {
            boardSum += arr[i];
        }
        else
        {
            paintersCount++;
            if(paintersCount > m || arr[i] > mid ) {
            return false;
        }
            boardSum = arr[i];
        }
        if(paintersCount > m) {
            return false;
        }
    }
    return true;
}

int paintersPartitionProblem(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    cout<<"Enter number of painters"<<endl;
    cin>>m;
    cout<<paintersPartitionProblem(arr,n,m);
    return 0;
}