#include<bits/stdc++.h>
using namespace std;
int v, e, u;
vector<int>ke[1001];
bool check[1001];
stack<int> st;
void dfs(int u){
	st.push(u);
	cout << u ;
	check[u] = true;
	while(!st.empty()){
		int k = st.top();
		st.pop();
		for(auto q : ke[k]){
			if(!check[q]){
				cout << " " << q;
				check[q] = true;
				st.push(k);
				st.push(q);
				break;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> v >> e >> u;
		for(int i = 1; i <= 1001; i++){
			ke[i].clear();
			check[i] = false;
		}
		for(int i = 0; i < e; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}
