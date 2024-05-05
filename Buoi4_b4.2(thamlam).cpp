#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector <int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin()+1, a.end(), greater <int> ());
    int res=0;
    for(int i=1; i<=n; i++)
    {
        if(t >= a[i])
        {
            t -= a[i];
            ++res;
        }
    }
    if(t==0)
    {
        cout << res;
    }
    else cout << "-1";
    return 0;
}
