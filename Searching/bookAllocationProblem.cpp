#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
                return false;
            }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        
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
    cout<<"Enter number of students"<<endl;
    cin>>m;
    cout<<allocateBooks(arr,n,m);
    return 0;
}