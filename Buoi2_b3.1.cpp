#include<bits/stdc++.h>
using namespace std;

int differentSubstring(string s)
{
    int cnt=0;
    for(int i=0; i<s.length(); i++)
    {
        string sub="";
        for(int j=i; j<s.length(); j++)
        {
            sub+=s[j];
            if(s.find(sub)==i)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    string s;
    cin >> s;
    cout << differentSubstring(s);
    return 0;
}
