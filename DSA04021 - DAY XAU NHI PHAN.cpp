#include<bits/stdc++.h>
using namespace std;
long long f[93];

char ctd(int n, long long k){
	if(n == 1) return '0';
	if(n == 2) return '1';
	if(k <= f[n - 2]) return ctd(n - 2, k);
	if(k > f[n - 2]) return ctd(n - 1, k - f[n - 2]);
}
int main(){
	f[1] = 1; f[2] = 1;
	for(int i = 3; i < 93; i++) f[i] = f[i - 2] + f[i - 1];
	int t; cin >> t;
	while(t--){
		int n; long long k;
		cin >> n >> k;
		cout << ctd(n, k) << endl;
	}
	return 0;
}
