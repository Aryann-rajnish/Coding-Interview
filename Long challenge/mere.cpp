#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<long long int, pair<long long int,long long int> > >p;
  long long int arr[100009];
  long long int brr[100009];
int main()
{
 long long int n,m;
  cin>>n>>m;

  for(long long int i=0;i<n;i++)
   cin>>arr[i];
   for(long long int i=0;i<n;i++)
   cin>>brr[i];
    for(long long int i=0;i<n;i++)
    {
     p.push(make_pair(arr[i]*brr[i],make_pair(arr[i],brr[i])));
    }
    while(m>0)
    {
     
    long long int q=p.top().first;
    long long int r=p.top().second.first;
    long long int s=p.top().second.second;
    p.pop();
    
    long long int z=p.top().first;
    
    
    if(r>0)
    {
      long long int u=(q-z)/s;
      if((q-z)%s!=0 || (q-z)==0)
      u=u+1;
      
     r-=u;
     q-=(s*u);
     m=m-u;
     }
     if(r!=0)
     p.push(make_pair(q,make_pair(r,s)));
     }
     long long int d=p.top().first;
     if(!p.empty())
     cout<<d<<endl;
     else
     cout<<"0"<<endl;
return 0;
}
    
     
     
