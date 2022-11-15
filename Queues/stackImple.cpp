#include<bits/stdc++.h>
using namespace std;

struct Stack{
    queue<int>q1,q2;
    
    int top(){
        return q1.front();
    }
    int pop(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main(){
    Stack q1;
    q1.push(10);
    q1.push(5);
    q1.push(15);
    q1.push(45);
    q1.push(12);
    cout<<q1.top()<<endl;
    cout<<q1.size()<<endl;
    q1.pop();
    cout<<q1.size()<<endl;
    cout<<q1.top()<<endl;
    return 0;
}