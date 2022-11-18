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

int res=0;
int height(Node* root){
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    res=max(res,lh+rh+1);
    return max(lh,rh)+1;
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(60);
    root->left->left=new Node(30);
    root->left->right=new Node(80);
    root->left->left->left=new Node(40);
    root->left->left->right=new Node(50);
    root->left->left->left->left=new Node(60);
    root->left->right->right=new Node(90);
    root->left->right->right->right=new Node(18);
    cout<<height(root);
    return 0;
}