#include<bits/stdc++.h>
using namespace std;
int check[1001];
int ch;
void dfs(int u, vector<int>ke[]){
	check[u] = 1;
	ch++;
	for(int x : ke[u]){
		if(!check[x]) dfs(x, ke);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;
		int a[e + 1], b[e + 1];
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			a[i] = x; b[i] = y;
		}
		for(int i = 1; i <= v; i++){
			memset(check, 0, sizeof(check));
			vector<int>ke[v+1];
			for(int j = 1; j <= e; j++){
				if(a[j] != i && b[j] != i){
					ke[a[j]].push_back(b[j]);
					ke[b[j]].push_back(a[j]);
				}
			}
			int q ; ch = 0;
			if(i < v) q = i + 1;
			else q = i - 1; // q khac i
			dfs(q, ke);
			if(ch < v - 1) cout << i << " ";
		}
		cout << endl;
	}
}

