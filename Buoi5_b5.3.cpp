#include<bits/stdc++.h>
#define inf 1e9 + 7
using namespace std;
const int max_n=20;
int n, current_cost, best_cost;
int visited[max_n], c[max_n][max_n], x[max_n];
void enter()
{
    cin >> n;
    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n; j++)
      {
         cin >> c[i][j];
      }
    }
    best_cost=inf;
    current_cost=0;
    visited[1]=1;
    x[1]=1;
}

void Try(int i)
{
   for(int j=2;j<=n;j++)
   {
      if(!visited[j])
      {
         x[i]=j;
         visited[j]=1;
         current_cost+=c[x[i-1]][j];
         if(i==n)
         {
            if(current_cost+c[j][1]<best_cost)
            {
                best_cost=current_cost+c[j][1];
            }
         }
         else if(current_cost<best_cost)
         {
            Try(i+1);
         }
         current_cost-=c[x[i-1]][j];
         visited[j]=0;
      }
   }
}
int main()
{
    enter();
    Try(2);
    cout<<best_cost<<endl;
}
