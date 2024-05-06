#include<bits/stdc++.h>
using namespace std;
string lcp_two_strings(string x, string y)
{
    int lcp_length=0;
    for(int i=0, j=0; i<x.size() && j<y.size(); i++, j++)
    {
        if(x[i]!=y[j])  break;
        ++lcp_length;
    }
    return x.substr(0, lcp_length);
}

string lcp_n_strings(vector<string> a, int l, int r)
{
    if(l==r)
        return a[l];
    if(l<r)
    {
        int mid=(l+r)/2;
        string lcp_left = lcp_n_strings(a, l, mid);
        string lcp_right = lcp_n_strings(a, mid+1, r);
        return lcp_two_strings(lcp_left, lcp_right);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << lcp_n_strings(a, 0, a.size()-1);
}
