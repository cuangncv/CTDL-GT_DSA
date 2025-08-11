#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long mu(long long n, long long k){
	if(k == 0) return 1;
	long long x = mu(n, k / 2);
	if(k % 2 == 0) return (x * x) % mod;
	return (((x * x) % mod) * n) % mod;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string q = s;
		reverse(s.begin(), s.end());
		cout << mu(stoll(q), stoll(s)) << endl;
	}
	return 0;
}
