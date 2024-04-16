#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.size();
    for(int i=0; i<n/2; i++)
    {
        if(s[i] != s[n-i-1]) return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    if(isPalindrome(s)) cout << "true";
    else cout << "false";
}
