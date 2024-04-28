#include<bits/stdc++.h>
using namespace std;

//sap xep tron (merge sort)
void merge(int a[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++) 
        L[i]=a[left+i];
    for(int j=0; j<n2; j++)
        R[j]=a[mid+1+j];

    int i=0, j=0, k=left;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            a[k]=L[i];
            i++;
        }
        else 
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }

}

void mergeSort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right-left)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid+1, right);

        merge(a, left, mid, right);
    }
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
    mergeSort(a, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
