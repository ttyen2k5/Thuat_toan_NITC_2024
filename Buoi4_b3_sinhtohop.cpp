//sinh to hop
#include<bits/stdc++.h>
using namespace std;
int a[100], n, k, stop=0;


void khoitao()
{
    for(int i=1; i<=k; i++)
    {
        a[i]=i;
    }
}


void xuat()
{
    for(int i=1; i<=k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


void sinh()
{
    int i=k;
    while(a[i]==n-k+i)
    {
        i--;
    }
    if(i==0)    stop=1;
    else 
    {
        a[i]++;
        int p=a[i];
        while(i<=k) 
        {
            a[i++]=p++;
        }
    }
}

void ctrinh()
{
    while(stop==0)
    {
        xuat();
        sinh();
    }
}

int main()
{
    cin >> n >> k;
    khoitao();
    ctrinh();
}
