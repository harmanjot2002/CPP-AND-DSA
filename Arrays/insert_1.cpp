#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int x,int pos){
    if(pos<=0 || pos>n+1){
        cout<<"Invalid position";
    }
    else{
        int idx=pos-1;
        for(int i=n;i>idx;i--){
            arr[i]=arr[i-1];
        }
        arr[idx]=x;
        for(int i=0;i<n+1;i++){
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