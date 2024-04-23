#include<bits/stdc++.h>
using namespace std;
int chessKnight(string cell)
{
    int di2[]={2, -2}, di1[]={1, -1}, dem=0, x=cell[0]-96, y=cell[1]-48;
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            if((x-di2[i]<=8 && x-di2[i]>=1) && (y-di1[j]>=1 && y-di1[j]<=8))
            {
                dem++;
            }
        }
    }
    
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            if((x-di1[i]<=8 && x-di1[i]>=1) && (y-di2[j]>=1 && y-di2[j]<=8))
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    string cell;
    cin >> cell;
    cout << chessKnight(cell);
}
