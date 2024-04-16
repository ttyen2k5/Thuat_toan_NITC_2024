#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    if(r >= 1)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x) return mid;
        else if(a[mid] > x) return binarySearch(a, l, mid-1, x);
        else return binarySearch(a, mid+1, r, x);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int x; 
    cin >> x;
    if(binarySearch(a, 0, n, x)==-1) cout << "false";
    else cout << "true";
}
