#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
bool check[1001];
void bfs(int u){
	queue<int>qu;
	check[u] = true;
	qu.push(u);
	while(!qu.empty()){
		int k = qu.front();
		qu.pop();
		for(auto x : ke[k]){
			if(!check[x]){
				qu.push(x);
				check[x] = true;	
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 1000; i++){
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
				bfs(i);
			} 
		}
		cout << dem << endl;
	}
}
