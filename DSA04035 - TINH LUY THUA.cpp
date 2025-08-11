#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long mu(long long a, long long b){
	if(b == 0) return 1;
	long long x = mu(a, b / 2);
	if(b % 2 == 0) return (x * x) % mod;
	return (((x * x) % mod) * a) % mod;
}
int main(){
	long long a, b;
	while(true){
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		cout << mu(a, b) << endl;
	}
	return 0;
}
