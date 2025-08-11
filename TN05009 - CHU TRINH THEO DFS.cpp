#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
int check[1001];
bool ok;
void ctdfs(int cnt, int u, string s){
	check[u] = 1;
	for(auto x : ke[u]){
		if(cnt >= 3 && x == 1){
			ok = true;
			cout << s + " " + to_string(x) << endl;
			return;
		}
		if(!check[x] && !ok) ctdfs(cnt + 1, x, s + " " + to_string(x));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1000; i++) ke[i].clear();
		int m, n;
		cin >> m >> n;
		for(int i = 1; i <= n; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		ok = false;
		for(int i = 1; i<= m; i++) sort(ke[i].begin(), ke[i].end());
		memset(check, 0, sizeof(check));
		ctdfs(1, 1, "1");
		if(!ok) cout << "NO" << endl;
	}
}
