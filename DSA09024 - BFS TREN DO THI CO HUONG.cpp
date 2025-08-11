#include<bits/stdc++.h>
using namespace std;
bool check[1001];
vector<int>ke[1001];
queue<int>qu;
void bfs(int u){
	qu.push(u);
	check[u] = true;
	while(!qu.empty()){
		int k = qu.front();
		qu.pop();
		cout << k << " ";
		for(auto q : ke[k]){
			if(!check[q]){
				check[q] = true;
				qu.push(q);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int v, e, u; cin >> v >> e >> u;
		for(int i = 1; i <= 1001; i++){
			check[i] = false;
			ke[i].clear();
		}
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		bfs(u);
		cout << endl;
	}
}
