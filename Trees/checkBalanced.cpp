#include<iostream>
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

int checkBalanced(Node* root){
    if(root==NULL)
        return 0;

    int lh=checkBalanced(root->left);
    if(lh==-1){
        return -1;
    }

    int rh=checkBalanced(root->right);
    if(rh==-1){
        return -1;
    }

    if(abs(lh-rh)>1){
        return -1;
    }
    else{
        return max(lh,rh)+1;
    }
}

int main(){
    Node* root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->left->left=new Node(3);
    root->left->right=new Node(5);
    cout<<checkBalanced(root);
    return 0;
}