#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long dp[n + 1] = {};
		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= 3; j++){
				if(i < j) break;
				dp[i] += dp[i - j]; 
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
