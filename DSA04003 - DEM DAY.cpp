#include<bits/stdc++.h>
using namespace std;
int mod = 123456789;
long long mu(long long a, long long b){
	if(b == 0) return 1;
	long long x = mu(a, b / 2);
	if(b % 2 == 0) return (x * x) % mod;
	return (((x * x) % mod) * a) % mod;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << mu(2, n - 1) << endl;
	}
	return 0;
}
