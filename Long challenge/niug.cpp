#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
  queue<long long int>q;


long long int sumd(long long int a)
{
 long long int sum=0;
 while(a!=0)
{
  sum+=a%10;
  a=a/10;
 }
return sum;
}

int main()
{
 long long int t;
  cin>>t;
  
  while(t--)
  {
    
   int l=4;

   long long int n,d;
   cin>>n>>d;
   q.push(n);
   long long int mini=n;
   long long int ind=1;
   long long int id=0;
   long long int count=0;
   long long int e=pow(2,26);
   
    for(long long int i=0;i<=15;i++)
    {
     if(l==5)
     break;
     for(long long int j=1;j<=pow(2,i);j=j+2)
     {
      
      long long int y=q.front();
      cout<<y<<endl;
      mp[y]=1;
      q.pop();
      if(y==1)
      {
       cout<<"1"<<" "<<i<<endl;
        l=5;
         break;
       }
       else if(y<mini)
         { mini=y;
           id=i;
          }
        long long int a=y+d;
        if(mp[a]==0)
        q.push(a);
        long long int b=sumd(y);
        if(mp[b]==0)
        q.push(b);
       }
      }
     if(l==5)
     continue;
    cout<<mini<<" "<<id<<endl;
    }
}

    
   
   
