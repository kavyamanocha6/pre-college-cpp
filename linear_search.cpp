#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,k;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter the elements: ";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"element to be searched: ";
    cin>>k;
    for (i=0;i<n;i++)
    {
        if (k==a[i])
        {
            cout<<i;
            break;
        }
    }
    if (i==n)
    {
        cout<<"not found";
    }
}