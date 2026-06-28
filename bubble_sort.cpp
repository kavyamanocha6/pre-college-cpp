#include<iostream>
using namespace std;
int main()
{
  int a[100];
  int i,n,j,c;
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
  for (i=n-1;i>=1;i--)
  {
    for (j=0;j<i;j++)
    {
      if (a[j]>a[j+1])
      {
        c=a[j+1];
        a[j+1]=a[j];
        a[j]=c;
      }
    }
  }
  cout<<"array after sorting: \n";
  for (i=0;i<n;i++)
  {
    cout<<a[i]<<"\n";
  }
}