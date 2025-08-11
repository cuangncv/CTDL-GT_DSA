#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <int> v;
		int dp[40001] = {};
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
			dp[x] = 1;
		}
		for(int i = 0; i < n; i++){
			for(int j = k; j >= v[i]; j--){
				if(dp[j - v[i]] == 1) dp[j] = 1; 
			}
		}
		if(dp[k] == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
