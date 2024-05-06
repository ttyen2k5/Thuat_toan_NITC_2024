//queue_b2
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n ;
    int max = n;
    priority_queue <int> b;
    int a[n];
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
        b.push(a[i]);
        while (b.top() == max)
        {
            cout << b.top() << " ";
            max --;
            b.pop();
        }
        cout << endl;
    }
}
