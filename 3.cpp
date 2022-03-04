#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,i,k;
   cin>>n>>k;
   int a[n];
   vector<int>v;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
     
     v.push_back(a[i]);
   }
     
   sort(v.begin(),v.end());
   // for(int i:v)
   // {
   //    cout<<i<<endl;
   // }

cout<<"kth minimum no is"<<v[k-1]<<endl;
cout<<"kth maximum no is"<<v[n-k]<<endl;


   return 0;
}