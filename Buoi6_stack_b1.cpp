//stack _ b1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        getline(cin, s);
        if(s==".") break;

        stack<char> st;
        st.push('@');

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==')')
            {
                if(st.top() == '(') st.pop();
                else st.push(s[i]);
            }
            else if(s[i] == ']')
            {
                if(st.top() == '[') st.pop();
                else st.push(s[i]);
            }
            else if(s[i] == '(' || s[i] =='[') st.push(s[i]);
        }
        if(st.top() == '@') cout << "yes" << endl;
        else cout << "no" << endl;
    }

}
