#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int check[1001];
bool ok;
void dfs(int u, int s){
	if(u == s){
		ok = true;
		return;
	}
	check[u] = 1;
	for(auto q : ke[u]){
		if(!check[q] && !ok) dfs(q, s);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1000; i++){
			ke[i].clear();
			check[i] = 0;
		}
		int n, m; cin >> n >> m;
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q; cin >> q;
		while(q--){
			ok = false;
			for(int i = 1; i <= n; i++) check[i] = 0;
			int x, y; cin >> x >> y;
			dfs(x, y);
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
