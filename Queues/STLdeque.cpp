#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Doubly ended queue
    deque<int>d;
    d.push_front(34);
    d.push_back(12);
    d.push_front(78);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    if(d.empty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }
    return 0;
}