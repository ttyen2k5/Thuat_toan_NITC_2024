#include<bits/stdc++.h>
using namespace std;
int max_activity(int n, vector<int>& start, vector<int>& end)
{
    vector<pair<int,int>> hd;
    for(int i=0; i<n; i++) 
    {
        hd.push_back({start[i], end[i]});
    }
    sort(hd.begin(), hd.end());
    int max=1;
    int kthuc=hd[0].second;
    for(int i=1; i<n; i++)
    {
        if(hd[i].first > kthuc) 
        {
            max++;
            kthuc = hd[i].second;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    for(int i=0; i<n; i++) 
    {
        cin >> start[i];
    }
    for(int i=0; i<n; i++) 
    {
        cin >> end[i];
    }
    cout << max_activity(n, start, end);
}
