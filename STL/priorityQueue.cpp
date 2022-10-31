#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Queue whose first element is always largest.Default priority queue is max-heap only.
    //Whenever we try taking out element from any priority queue,then if it is a max-heap,it will always return maximum element and minimum if it is a min-heap.

    //Max-heap:
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size: "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;


    //Min-heap:
    priority_queue<int,vector<int>,greater<int>>mini;

    mini.push(5);
    mini.push(4);
    mini.push(7);
    mini.push(0);

    cout<<"Size: "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Empty or not "<<mini.empty()<<endl;
    return 0;
}