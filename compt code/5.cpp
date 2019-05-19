#include<bits/stdc++.h>
using namespace std;
int max_baloon(int arr, int size){
    int sum = 0;
    sort(arr, arr+size);
    int i = 1;
    for(i=size-2; i>0 ;i--){
        sum += arr[i-1]*arr[i]*arr[i+1];
    }
    int res = 0;
    res = res + sum + arr[0]*arr[size-1] +arr[size-1]
    return res;
}
int main(){
    int arr[10];
    int size;
    cout<<"no of ballon"<<endl;
    cin>>size;
    cout<<"number of coin in balloon"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout << max_baloon(arr[size], size)<<endl;
    return 0;
    
}