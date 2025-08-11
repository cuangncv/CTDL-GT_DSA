#include <bits/stdc++.h>
using namespace std;
int v, e, dau, cuoi, ch;
vector<int> ke[1001];
string res;
int check[1001];
void BFS(pair<int, string> p) {
	queue<pair<int, string>> q;
	q.push(p);
	check[p.first] = 1;
	while(!q.empty()) {
		p = q.front();
		q.pop();
		if(p.first == cuoi) {
			res = p.second;
			ch = 1;
			return;
		}
		for(int i : ke[p.first]) {
			if(check[i] == 0) {
				q.push({i, p.second + " " + to_string(i)});
				check[i] = 1;
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while(t--) {
		ch = 0;
		for(int i = 0; i < 1001; i++) ke[i].clear();
		memset(check, 0, sizeof(check));
		cin >> v >> e >> dau >> cuoi;
		for(int i = 0; i < e; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		
		BFS({dau, to_string(dau)});
		if(ch == 0) cout << -1 << endl;
		else cout << res << endl;
	}
    return 0;
}

