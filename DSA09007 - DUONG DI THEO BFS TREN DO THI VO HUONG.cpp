#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool check[1001], ok;
void bfs(int s, int t, pair<int, string>p){
	queue<pair<int, string>>qu;
	check[s] = true;
	qu.push({s, to_string(s)});
	while(!qu.empty()){
		p = qu.front();
		qu.pop();
		if(t == p.first){
			cout << p.second << endl;
			ok = true;
			return;
		}
		for(auto x : ke[p.first]){
			if(!check[x] && !ok) {
				check[x] = true;
				qu.push({x, p.second + " " + to_string(x)});
			}
		}
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
		bfs(s, t, {});
		if(!ok) cout << -1 << endl;
	}
}
