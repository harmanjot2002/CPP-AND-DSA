#include<iostream>
using namespace std;

int firstPetrolPump(int petrol[],int dist[],int n){
    int start=0,curr_pet=0;
    int prev_pet=0;
    for(int i=0;i<n;i++){
        curr_pet+=(petrol[i]-dist[i]);
        if(curr_pet<0){
            start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;
        }
    }
    return ((curr_pet+prev_pet)>=0)?(start+1):-1;
}

int main(){
    int petrol[4]={4,8,7,4};
    int dist[4]={6,5,3,5};
    cout<<firstPetrolPump(petrol,dist,4);
    return 0;
}