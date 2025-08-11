#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
bool check[1001];
void dfs(int u){
	check[u] = true;
	cout << u << " ";
	for(auto x: ke[u]){
		if(!check[x]) dfs(x);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int v, e , u;
		cin >> v >> e >> u;
		for(int i = 1; i <= 1001; i++){
			check[i] = false;
			ke[i].clear();
		}
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}
