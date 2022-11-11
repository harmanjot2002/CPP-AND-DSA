#include<iostream>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        arr=new int[cap];
        cap=c;
        top=-1;
    }

    void push(int x){
        if(top==cap-1){
            cout<<"Overflow";
        }
        top++;
        arr[top]=x;
    }
    
    int pop(){
        if(top==-1){
            cout<<"Underflow";
        }
        int res=arr[top];
        top--;
        return res;
    }
    
    int peek(){
        if(top==-1){
            cout<<"Underflow";
        }
        return arr[top];
    }
    
    int size(){
        return (top+1);
    }
    
    bool isEmpty(){
        return (top==-1);        
    }
};

int main(){
    MyStack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}