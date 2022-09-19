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

int isBSTutil(Node* root,int min,int max);

int isBST(Node* root){
    return(isBSTutil(root,INT_MIN,INT_MAX));
}

int isBSTutil(Node* root,int min,int max){
    if(root==NULL)
        return 1;
    if(root->key<min || root->key>max)
        return 0;
    else    
        return(isBSTutil(root->left,min,root->key-1) && isBSTutil(root->right,root->key+1,max));
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    if(isBST(root))
        cout<<"Is BST";
    else    
        cout<<"Not BST";     
    return 0;
}