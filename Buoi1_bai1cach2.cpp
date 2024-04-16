#include<bits/stdc++.h>
using namespace std;
bool arr[1000001];
void snt(int n)
{
	for(int i=2; i<=n; i++)
	{
		arr[i]=1;
	}
	arr[0]=arr[1]=0;
	for(int i=2; i<=sqrt(n); i++)
		if(arr[i])
			for(int j=i*i; j<=n; j+=i)
				arr[j]=0;
	
}


int gcd(int a, int b)
{
	while(b!=0) return a%b;
	return a;
}

int GCPD(int a, int b)
{
	snt(gcd(a,b));
	for(int i=gcd(a,b); i>=2; i--)
	{
		if(arr[i] && a%i==0 && b%i==0) return i;
	}
	return -1;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << GCPD(a,b);
}
