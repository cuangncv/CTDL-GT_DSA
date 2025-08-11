#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string n, m;
		cin >> n >> m;
		int a = n.length(), b = m.length();
		n = " " + n;
		m = " " + m;
		int dp[a + 1][b + 1] = {};
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= b; j++){
				if(n[i] == m[j]){
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[a][b] << endl;
	}
}
