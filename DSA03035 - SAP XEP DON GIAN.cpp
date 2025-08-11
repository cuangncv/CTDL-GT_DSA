#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int dp[n+1] = {};
	for(int i = 0; i < n; i++){
		dp[a[i]] = dp[a[i] - 1] + 1;
	}
	cout << n - *max_element(dp, dp + n);
}
