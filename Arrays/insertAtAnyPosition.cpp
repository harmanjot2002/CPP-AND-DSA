#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int x,int pos){
    //position is valid if it is starting in between 1 and n+1,including 1 and n+1;for example,if n=4;then new number can be inserted at position 1,2,3,4,5.
    if(pos<1 || pos>n+1){
        cout<<"Invalid position";
    }
    else{
        int idx=pos-1;
        for(int i=n-1;i>=idx;i--){
            arr[i+1]=arr[i];
        }
        arr[idx]=x;
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<" ";
        }
    }
}


int main(){
    int n,x,pos,arr[50];
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to be inserted"<<endl;
    cin>>x;
    cout<<"Enter position"<<endl;
    cin>>pos;
    insert(arr,n,x,pos);
    return 0;
}

//Time Complexity:O(n)