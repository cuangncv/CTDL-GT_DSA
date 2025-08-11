#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
bool check[1001];
void dfs(int u){
	check[u] = true;
	for(int x : ke[u]){
		if(!check[x]) dfs(x);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1001; i++){
			ke[i].clear();
			check[i] = false;
		}
		int v, e; cin >> v >> e;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int dem = 0;
		for(int i = 1; i <= v; i++){
			if(!check[i]){
				dem++;
				dfs(i);
			} 
		}
		cout << dem << endl;
	}
}
