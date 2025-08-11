#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool check[1001], ok;
void dfs(int s, int t, string p){
	check[s] = true;
	if(s == t){
		ok = true;
		cout << p << endl;
		return;
	}
	for(auto x : ke[s]){
		if(!check[x] && !ok) dfs(x, t, p + " " + to_string(x));
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		for(int i = 1; i <= 1000; i++){
			ke[i].clear();
			check[i] = false;
		}
		ok = false;
		int v, e, s ,t;
		cin >> v >> e >> s >> t;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(s, t, to_string(s));
		if(!ok) cout << -1 << endl;
	}
}
