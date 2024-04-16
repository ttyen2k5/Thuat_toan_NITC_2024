#include<bits/stdc++.h>
using namespace std;

int lastDigitDiff0(int n)
{
	long long res=1;
	for(int i=2; i<=n; i++)
	{
		res*=i;
		while(res%10==0) res/=10;
		res=res%100;
	}
	return res%10;
}

int main()
{
	int n; cin >> n;
	cout << lastDigitDiff0(n);
}
