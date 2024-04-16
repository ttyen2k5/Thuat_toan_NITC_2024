#include<bits/stdc++.h>
using namespace std;
void hvdep(int n)
{
    if(n<=3)
	{
        cout << "NO SOLUTION";
    }
    for (int i = 2; i <= n; i += 2) 
	{
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2)
	{
        cout << i << " ";
    }

    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    hvdep(n);
}
