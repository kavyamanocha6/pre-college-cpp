#include<iostream>
using namespace std;
int main()
{
  int a[100];
  int n,i,j,min,c;
  cout<<"enter the number of elements: ";
  cin>>n;
  cout<<"enter the elements: \n";
  for (i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"array before sorting: \n";
  for (i=0;i<n;i++)
  {
    cout<<a[i]<<"\n";
  }
  for (i=0;i<n-1;i++)
  {
    min=i;
    for (j=i;j<n;j++)
    {
      if (a[j]<a[min])
      {
        min=j;
      }
    }
    c=a[min];
    a[min]=a[i];
    a[i]=c;
  }
  cout<<"array after sorting: \n";
  for (i=0;i<n;i++)
  {
    cout<<a[i]<<"\n";
  }
}