#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int N, M;
    long long *arr = new long long[10000001];
	int T;
    cin>>T;
    while(T--){
        cin>>N;
        for(int i = 0; i < N; i++){
            cin>>arr[i];
        }
        cin>>M;
        sort(arr, arr+N);
        
        long long int min_diff = arr[M-1]-arr[0];
        for(int i = 1; i < N-M+1; i++){
            long long  diff = arr[i+M-1]-arr[i];
            if(diff < min_diff)
            min_diff = diff;
        }
        cout << min_diff<<endl;
    }
    delete []arr;
	return 0;
}