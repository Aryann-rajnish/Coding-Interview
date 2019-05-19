//binary search //
#include<bits/stdc++.h>
using namespace std;
vector<int> factors;
void find_factor(int n){
    for(int i = 0; i*i<=n; i++){
        if(n%i == 0){
            if(n / i == i)
            factors.push_back(i);
            else {
                factors.push_back(i);
                factors.push_back(n/i);
            }
        }
    }
}
int find_products(int n){
    int products = -1;
    int si = factors.size();
    for(int i=0; i < si; i++)
        for(int j=0; i < si; i++)
            for(int k=0; i < si; i++)
                for(int l=0; i < si; i++){
                    int s = factors[i]+factors[j]+factors[k]+factors[l];
                    if(s == n){
                        int p = factors[i]*factors[j]*factors[k]*factors[l];
                        if(p > products)
                        products = p;
                    }
                }
                return products;

}
int main(){
    int n = 10;
    find_factor(n);
    cout << find_products(n) << endl;
}