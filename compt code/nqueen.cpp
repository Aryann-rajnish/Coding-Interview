#include<bits/stdc++.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
bool isattacked(int x, int y, vector< vector<int> > &a, int n)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i][y]==1)
        {
            return true;
        }
        
        if(a[x][i]==1)
        {
            return true;
        }
    }
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(i+j==x+y && a[i][j]==1)
            {
                return true;
            }   
        
            if(i-j==x-y && a[i][j]==1)
            {
                return true;
            } 
        }
    }
    
    return false;
}
 
bool nqueens(vector< vector<int> > &a, int n)
{
    if(n==0)
        return true;
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(isattacked(i,j,a,n))
                continue;
            a[i][j]=1;
            
            
	    
            if(nqueens(a, n-1))
                return true;
            a[i][j]=0;
        }
    }
    
    return false;
}
 
int main() {
	int num;
	cin >> num;
	vector<vector<int>> a(num,vector<int>(num,0));
	bool s = nqueens(a, num);
	if(s)
	{
	    for(int i=0;i<num;i++)
	    {
	        for(int j=0;j<num;j++)
	            cout<<a[i][j]<<" ";
	            
	        cout<<endl;     
	    }
	}
	else
	    cout<<"Not possible";
}
