#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > mtxoanoc(int n)
{
    vector< vector<int> > a;
    vector<int> b;
    int x=0, y=n-1, k=0;
    for(int i=0; i<n; i++)  b.push_back(1);
    for(int i=0; i<n; i++)  a.push_back(b);

    while(k<n*n)
    {
        for(int i=x; i<=y; i++)
        {
            k++;
            a[x][i]=k;
        }
        for(int i=x+1; i<=y; i++)
        {
            k++;
            a[i][y]=k;
        }
        for(int i=y-1; i>=x; i--)
        {
            k++;
            a[y][i]=k;
        }
        for(int i=y-1; i>=x+1; i--)
        {
            k++;
            a[i][x]=k;
        }
        x++; 
        y--;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    vector< vector<int> > t=mtxoanoc(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)  cout << t[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
