//Sxep nhanh (QuickSort)
#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int l, int r)
{
    int pivot = a[l+ (r-l)/2];
    int i = l-1;
    for(int j=l; j<=r-1; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[r]);
    return i+1;
}

void QuickSort(int a[], int l, int r)
{
    if(l-r)
    {
        int pivot=partition(a,l,r);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,r);
    }
}

//bai 1
int main()
{
    vector<int>a={-1,150,190,170,-1,-1,160,180};
    vector<int>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=-1){b.push_back(a[i]);}
    }
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=-1)
        {
            int x=b.back();
            b.pop_back();
            a[i]=x;
        }
    }
    for(auto i:a)
    {
    cout<<i<<" ";
    }
    return 0;
}
