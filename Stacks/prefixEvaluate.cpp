#include <bits/stdc++.h>
using namespace std;

int evalPost(string str)
{
    reverse(str.begin(), str.end());
    cout << str << endl;
    stack<int> st;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c <= '9' && c >= '0')
        {
            st.push(c - 48);
        }
        else
        {
            int ans = st.top();
            st.pop();
            if (c == '+')
            {
                int cal = int((st.top())) + ans;
                st.pop();
                st.push(cal);
            }
            else if (c == '-')
            {
                int cal = ans - int((st.top()));
                st.pop();
                st.push(cal);
            }
            else if (c == '*')
            {
                int cal = int((st.top())) * ans;
                st.pop();
                st.push(cal);
            }
            else if (c == '/')
            {
                int cal = ans / int((st.top()));
                st.pop();
                st.push(cal);
            }
            else if (c == '^')
            {
                int cal = int((st.top())) ^ ans;
                st.pop();
                st.push(cal);
            }
        }
    }
    return (int(st.top()));
}
int main()
{
    string str = "+9*126";
    cout << evalPost(str) << endl;
    return 0;
}