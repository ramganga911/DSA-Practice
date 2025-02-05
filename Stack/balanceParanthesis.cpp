#include<bits/stdc++.h>
using namespace std;
// Write a function to check if the given string is valid paranthesis or not
bool isValid(string s) // Time complexity: O(n)
{
    stack<char> st; // stack to store the paranthesis
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) // if stack is empty then return false
            {
                return false;
            }
            if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            { // if the top of the stack is not equal to the closing paranthesis then return false
                return false;
            }
        }
    }

    return st.empty();
}
int main(){
    string s = "()[]{}";
    bool ans = isValid(s);
    cout << ans;
    return 0;
}