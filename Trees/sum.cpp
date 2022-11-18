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


int getSum(Node* root){
    if(root==NULL)
        return 0;
    else{
        return root->key+getSum(root->left)+getSum(root->right);
    }
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    root->right->right->right=new Node(6);
    cout<<getSum(root);
    return 0;
}