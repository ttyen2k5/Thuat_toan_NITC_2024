#include<bits/stdc++.h>
using namespace std;
void findPaths(vector <vector<int>>& mt, int m, int n, int i, int j, string path)
{
    if(i==m-1 && j==n-1)
    {
        cout << path << endl;
        return;
    }
    if(j+1<n && mt[i][j+1]==1)
    {
        findPaths(mt, m, n, i, j+1, path+"R");
    }
    if(i+1<m && mt[i+1][j]==1)
    {
        findPaths(mt, m, n, i+1, j, path+"D");
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector<int>> mt(m, vector<int>(n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> mt[i][j];
        }
    }
    findPaths(mt, m, n, 0, 0, "");
}
