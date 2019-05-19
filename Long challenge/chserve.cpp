#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int T, p1, p2, k, R;
    cin >>T;
    for(int i=0; i<T; i++){
    cin >> p1 >> p2 >> k ;
    long long int a, b;
    a = p1 + p2 +1;
    b = 2*k;
    R = a%b;
    if (R >= 1 && R <= k)
    cout << "CHEF" << endl;
    else
    cout << "COOK" << endl;}
    return 0;
}
