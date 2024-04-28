#include<bits/stdc++.h>
using namespace std;
long fibonaciRecursion(long n)
{
    if(n<=1)    return n;
    return (fibonaciRecursion(n-1) + fibonaciRecursion(n-2)) % 1000000007;

}

int main()
{
    long n;
    cin >> n;
    cout << fibonaciRecursion(n);
}
