#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverse(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}

void Print(queue<int> q)
{
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main(){
    queue<int> q1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        q1.push(x);
    }
    q1 = reverse(q1);
    for (int i = 0; i < n; i++){
        cout << q1.front() << " ";
        q1.pop();
    }    
    return 0;
}