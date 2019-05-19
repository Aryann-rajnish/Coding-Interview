#include<bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return (a<b)? a: b;
}
int c(int n,int k){
    int a[n+1][k+1];
    int i, j;
    for(i=0; i<=n; i++){
        for(j=0; j <= min(i, k); j++){
        if(j == 0 || j == i)
        a[i][j] = 1;
        else
        a[i][j] = c(n-1,k-1) + c(n-1,k);   
        }
    }
    return a[n][k];
}
int main(){
    int n=5, k=2;
    cout<< c(n,k)<<endl;
    return 0;
}