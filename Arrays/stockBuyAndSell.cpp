#include<bits/stdc++.h>
using namespace std;

//Profit occurs when we buy something at low price and then sell it at higher price.
int maxProfit(int price[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(price[i]>price[i-1]){
            profit+=(price[i]-price[i-1]);
        }
    }
    return profit;
}

int main(){
    int arr[50],n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(arr,n);   
    return 0;
}

//Time Complexity: O(n)