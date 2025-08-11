#include<bits/stdc++.h>
using namespace std;
int v, e, u;
vector<int>ke[1001];
bool check[1001];
queue<int>qu;
void bfs(int u){
    qu.push(u);
    check[u]=true;
    while(!qu.empty()){
        int q = qu.front();
        cout << q << " ";
        qu.pop();
        for(auto k:ke[q]){
            if(check[k]==false){
                qu.push(k);
                check[k]=true;
            }
        }
    }
    return;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> v >> e >> u;
		for(int i = 1; i <= 1001; i++){
			check[i] = false;
			ke[i].clear();
		}
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bfs(u);
		cout << endl;
	}
}
