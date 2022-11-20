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

Node* ciel(Node* root,int x){
    Node* res=NULL;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key<x){
            root=root->right;
        }
        else{
            res=root;
            root=root->left;
        }
    }
    return res;
}
 
int main(){
    Node* root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    root->right->right->right=new Node(90);
    Node* res=ciel(root,65);
    cout<<res->key;
    return 0;
}