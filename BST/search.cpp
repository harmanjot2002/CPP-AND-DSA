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
 
bool search(Node* root,int x){
    while(root!=NULL){
        if(root->key==x){
            return true;
        }
        else if(root->key>x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}

int main(){
    Node* root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    root->right->right->right=new Node(90);
    cout<<search(root,70);
    return 0;
}