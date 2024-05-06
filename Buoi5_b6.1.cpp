#include<bits/stdc++.h>
using namespace std;
int maxDifference(int a[], int l, int r)
{
    if(l==r)
    {
        return 0;
    }
    int mid=(l+r)/2;
    int leftMaxDiff = maxDifference(a, l, mid);
    int rightMaxDiff = maxDifference(a, mid+1, r);
    int maxLeft = a[mid];
    int minRight = a[mid+1];
    for(int i=l; i<=mid; i++)
    {
        maxLeft=max(maxLeft, a[i]);
    }
    for(int i=mid+1; i<=r; i++)
    {
        minRight=min(minRight, a[i]);
    }
    return max(leftMaxDiff, max(rightMaxDiff, minRight - maxLeft));
}

int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << maxDifference(a, 0, n-1);
}
