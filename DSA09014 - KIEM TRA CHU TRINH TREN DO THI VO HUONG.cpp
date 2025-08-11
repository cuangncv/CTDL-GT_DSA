#include<bits/stdc++.h>
using namespace std;
int v, e, dinh; 
vector<int>ke[1001];
bool ok;
int check[1001];
void ctdfs(int u, int cnt){
	check[u] = 1;
	for(auto x : ke[u]){
		if(cnt >= 3 && x == dinh){
			ok = true;
			return;
		}
		if(!check[x] && !ok) ctdfs(x, cnt + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1000; i++){
			ke[i].clear();
		}
		ok = false;
		cin >> v >> e;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= v; i++){
			memset(check, 0, sizeof(check));
			dinh = i;
			ctdfs(i, 1);
			if(ok) break;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}	
