#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    int lCount;
    Node(int k){
        key=k;
        left=right=NULL;
        lCount=0;
    }
};

Node* insert(Node* root,int x){
    if(root==NULL)
        return new Node(x);
    if(root->key>x){
        root->left=insert(root->left,x);
        root->lCount++;
    }
    else if(root->key<x)
        root->right=insert(root->right,x);
    return root;        
}

Node* kThSmallest(Node* root,int k){
    if(root==NULL)
        return NULL;
    int count=root->lCount+1;
    if(count==k)
        return root;
    else if(count>k)
        return kThSmallest(root->left,k);
    else    
        return kThSmallest(root->right,k-count);
}

int main(){
    Node* root=NULL;
    int arr[]={20,8,22,4,12,10,14};
    for(int x:arr)
        root=insert(root,x);
    int k=4;
    Node* res=kThSmallest(root,k);
    if(res==NULL)
        cout<<"There are less than k nodes in BST";
    else    
        cout<<"Kth smallest element in BST is "<<res->key;    
    return 0;
}