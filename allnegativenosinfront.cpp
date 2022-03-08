#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0,k=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            b[k]=a[i];
            k--;
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

  return 0;
}