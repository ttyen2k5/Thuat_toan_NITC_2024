#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, M;
    cin >> n >> M;

    vector<int> weights(n);
    vector<int> values(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> weights[i] >> values[i];
    }

    vector<int> dp(M + 1, 0);

    for (int i = 0; i < n; ++i) 
    {
        for (int w = M; w >= weights[i]; --w) 
        {
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
        }
    }

    cout << dp[M] << endl;

    return 0;
}
