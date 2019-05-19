#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N, count=0;
        cin>>N;
        int i;
        for(i = 1; i*i < N; i++){
            if(i*i<N)
            count++;
            else if(i*i>=N)
            break;
        }
        cout<<count<<endl;
    }
    return 0;
}