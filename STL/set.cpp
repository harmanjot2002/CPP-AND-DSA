#include<iostream>
#include<set>
using namespace std;

int main(){
    //set stores unique element.
    //set uses BST ,once added element cannot be modified,it is only deleted,it stores elements in increasing order.
    //set is slower than unordered_set.Elements fetched from unordered_set doesn't come in sorted ord   er,they are random.

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);
    cout<<"iterator of 5 if present in s: "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    } 
    return 0;
}