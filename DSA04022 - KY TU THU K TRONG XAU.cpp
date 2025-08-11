#include<bits/stdc++.h>
using namespace std;
int ctd(int n, int k){
	if(k == pow(2, n - 1)) return n - 1;
	if(k > pow(2, n - 1)) return ctd(n - 1, k - pow(2, n - 1));
	return ctd(n - 1, k);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << (char)('A' + ctd(n, k))<< endl;
	}
	return 0;
}
