#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    auto it=s.find(10);
    if(it==s.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }
    cout<<endl;

    if(s.count(10))
        cout<<"Found";
    else    
        cout<<"Not found";
    cout<<endl;

    s.erase(10);
    for(int x:s)
        cout<<x<<" ";
    cout<<endl;
    
    cout<<s.size()<<" ";
    s.clear();
    cout<<s.size();
    return 0;
}