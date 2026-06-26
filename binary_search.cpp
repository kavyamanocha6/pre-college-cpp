#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,k,low,high,mid,x;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter the elements: ";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"element to be searched: ";
    cin>>k;
    low=0;
    high=n-1;
    x=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (k==a[mid])
        {
            cout<<mid;
            x=1;
            break;
        }
        else if (k<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (x==0)
    {
        cout<<"not found";
    }
}