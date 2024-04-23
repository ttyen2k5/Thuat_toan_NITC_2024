#include<bits/stdc++.h>
using namespace std;


//sap xep noi bot
void bubbleSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}


//sap xep chon
void selectionSort(int a[], int n)
{
    for(int i=0; in-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex=j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}


//sap xep chen
void insertionSort(vector<int>& a)
{
    int n=a.size();
    for(int i=1; i<n; i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = key;
    }
}

int sum(int n)
{
    int d=0;
    while(n > 0)
    {
        d+=n%10;
        n/=10;
    }
    return d;
}
vector<int> digitalSumSort(vector<int> a)
{
    for(int i=0; i<a.size()-1; i++)
    {
        for(int j=i+1; j<a.size(); j++)
        {
            if(sum(a[i]) > sum(a[j]) || (sum(a[i]) == sum(a[j]) && a[i] > a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    return a;
}
