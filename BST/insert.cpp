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

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }   
}

Node* insert(Node* root,int x){
    if(root==NULL)
        return new Node(x);
    else if(root->key<x)
        root->right=insert(root->right,x);
    else
        root->left=insert(root->left,x);
    return root;    
}

int main(){
    Node* root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    root->right->right->right=new Node(90);
    insert(root,75);
    inorder(root);
    return 0;
}