#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& nums)
{
    int n=nums.size();
    if(n==0)    return 0;
    vector<int> lengths(n,1);
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(nums[i] > nums[j])
            {
                lengths[i] = max(lengths[i], lengths[j]+1);
            }
        }
    }
    return *max_element(lengths.begin(), lengths.end());
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        nums.push_back(x);
      
    }
    cout << lengthOfLIS(nums) << endl;
}
