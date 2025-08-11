#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long mu(int n, long long k){
	if(k == 1) return n;
	long long x = mu(n, k / 2);
	if(k % 2 == 0) return (x * x) % mod;
	return (((x * x) % mod) * n) % mod;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; long long k;
		cin >> n >> k;
		cout << mu(n, k) << endl;
	}
	return 0;
}
