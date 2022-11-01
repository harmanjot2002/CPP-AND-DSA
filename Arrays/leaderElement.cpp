#include <iostream>
#include<stack>
using namespace std;

int leader(int arr[],int n){
    stack<int> st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>st.top()){
            st.push(arr[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    int arr[50], n;
    cout << "Enter number of elements in array" << endl;
    cin >> n;
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leader(arr, n);
    return 0;
}