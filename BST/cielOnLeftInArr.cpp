#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void printPrevGreater(int arr[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it==s.end())
            cout<<"-1";
        else    
            cout<<*it;
        s.insert(arr[i]);
        cout<<" ";
    }
}

int main(){
    int arr[]={2,8,30,15,25,12};
    printPrevGreater(arr,6);
    return 0;
}