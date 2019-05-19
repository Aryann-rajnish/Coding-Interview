#include<bits/stdc++.h>
using namespace std;
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
    long long int T;
    cin>>T;
    long long int n;
    while(T--){
     cin>>n;
     cout<<sumd(n)<<endl;
    }
    return 0;
}