#include<bits/stdc++.h>
using namespace std;
int ctd(int n, long long k){
	if(k == pow(2, n - 1)) return n;
	if(k < pow(2, n - 1)) return ctd(n - 1, k);
	return ctd(n - 1, k - pow(2, n - 1));
}
int main(){
	int t; cin >> t; 
	while(t--){
		int n; long long k;
		cin >> n >> k;
		cout << ctd(n, k) << endl;
	}
	return 0;
}
