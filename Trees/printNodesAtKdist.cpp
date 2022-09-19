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

void printKdist(Node* root,int k){
    if(root==NULL)
        return;
    if(k==0)
        cout<<root->key<<" ";
    else{
        printKdist(root->left,k-1);
        printKdist(root->right,k-1);
    }
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    root->right->right->right=new Node(6);
    printKdist(root,2);
    return 0;
}