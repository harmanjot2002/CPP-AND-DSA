#include<iostream>
#include<deque>
using namespace std;

struct MyDeque{
    deque<int> dq;
    void insertMin(int x){dq.push_front(x);}
    void insertMax(int x){dq.push_back(x);}
    int getMin(){return dq.front();}
    int getMax(){return dq.back();}
    int extractMin(){dq.pop_front();}
    int extractMax(){dq.pop_back();}
};
int main(){
    MyDeque dq;
    dq.insertMin(10);
    dq.insertMax(15);
    cout<<dq.getMax()<<endl;
    cout<<dq.getMin()<<endl;
    dq.insertMin(5);
    cout<<dq.getMax()<<endl;
    cout<<dq.getMin()<<endl;
    dq.extractMin();
    dq.extractMax();
    cout<<dq.getMax()<<endl;
    cout<<dq.getMin()<<endl;
    dq.insertMin(8);
    cout<<dq.getMax()<<endl;
    cout<<dq.getMin()<<endl;
    return 0;
}