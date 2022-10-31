#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    list<int> n(5,100);
     for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    //l.pop_back();
    //l.pop_front();


    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
     
    l.erase(l.begin());
    cout<<"After erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Front: "<<l.front()<<endl;
    cout<<"Back: "<<l.back()<<endl;
    cout<<"Size: "<<l.size()<<endl;
    return 0;
}