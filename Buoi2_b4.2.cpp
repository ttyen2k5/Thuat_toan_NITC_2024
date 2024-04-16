#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int max_sum=a[0], cur_sum=a[0];
	int start_idx=0, end_idx=0;
	int cur_start_idx=0;
	for(int i=1; i<n; i++)
	{
		if(cur_sum<0)
		{
			cur_sum=a[i];
			cur_start_idx=i;
		}
		else cur_sum+=a[i];
		
		if(cur_sum > max_sum)
		{
			max_sum=cur_sum;
			start_idx=cur_start_idx;
			end_idx=i;
		}
	}
	cout << start_idx + 1 << " " << end_idx +1 << " " << max_sum;
}
