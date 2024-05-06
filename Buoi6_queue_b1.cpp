//queue_b1
#include<bits/stdc++.h>
using namespace std;
int first_num(int a[], int n)
{
    queue<int> q;
    for(int i=0; i<5; i++)
    {
        q.push(a[i]);
    }
    while(n--)
    {
      int x=q.front();
      q.pop();
      q.push(x);
      q.push(x);
    }
    return q.front();
}
int main()
{
   int a[5]={1,2,3,4,5};
   int n;
   cin >> n;
   cout << first_num(a,n-1);
}
