#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,i;
    int A[100000];
    cin>>N>>M>>"\n";
    for(i=1;i<=N;i++)
    {
        cin>>A[i]>>"\n";
    }
    for(i=N;i>=1;i--)
    {
        if(A[i]==M)
        cout<<i<<endl;
        else
        cout<<-1<<endl;
    }
}