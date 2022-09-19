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


Node* convertBinTreeToDLL(Node* root){
    Node* prev=NULL;
    if(root==NULL)
        return root;
    Node* head=convertBinTreeToDLL(root->left);
    if(prev==NULL){
        head=root;
    }
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    convertBinTreeToDLL(root->right);
    return head;
}

void printList(Node* head)
{
    while (head!=NULL) {
        cout << head->key << " ";
        head=head->right;
    }
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(69);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    root->right->right->right=new Node(6);
    convertBinTreeToDLL(root);  
    cout<<printList(head);   
    return 0;
}