#include <bits/stdc++.h>
using namespace std;
#define max 100000
int n, t;
int minnotes(int t, vector<int>& a)
{
    vector<int> dp(t+1, max);
    dp[0]=0;
    for(int i=0; i<n; i++)
    {
        for(int j=t; j>=a[i]; j--)
        {
            if(dp[j-a[i]] != max)
            {
                dp[j]=min(dp[j],dp[j-a[i]]+1);
            }
        }
    }
    return dp[t]==max?-1:dp[t];
}
int main()
{
    cin >> n >> t;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << minnotes(t, a);
}
