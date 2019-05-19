#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int n,k;
int num[27];
int main() {

	cin >> n >> k;

	memset(num, 0, sizeof(num));

	string s;
	
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		int t = s[i] - 'A';

		num[t]++;
	}

	int mn = 1e9;
	for (int i = 0; i < k; i++) {
		mn = min(mn, num[i]);
	}
	int ans = 0;

	for (int i = 0; i < k; i++) {
		if (num[i] == 0) {
			printf("%d\n", 0);
			return 0;
		}
		ans += mn;
	}

	printf("%d\n", ans);

	return 0;
}
