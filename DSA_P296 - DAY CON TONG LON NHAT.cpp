#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, q; cin >> n >> q;
	int a[n];
	int dp[n + 1] = {};
	dp[0] = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > 0) dp[i + 1] = dp[i] + a[i];
		else dp[i + 1] = dp[i];
	}
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << dp[r] - dp[l - 1] << endl;
	}
	return 0;
}
