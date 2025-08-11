#include<bits/stdc++.h>
using namespace std;
bool check[1001], ok;
vector<int>ke[1001];
void dfs(int s, int t, string p){
	check[s] = true;
	if(s == t){
		ok = true;
		cout << p << endl;
		return;
	}
	for(auto q : ke[s]){
		if(!ok && !check[q]) dfs(q, t, p + " " + to_string(q));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1001; i++){
			check[i] = false;
			ke[i].clear();
		}
		ok = false;
		int v, e, s, t;
		cin >> v >> e >> s >> t;
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		dfs(s, t, to_string(s));
		if(!ok) cout << "-1" << endl;
	}
}
