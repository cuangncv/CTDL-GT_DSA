#include <bits/stdc++.h>
using namespace std;
int v, e, x, y, dem;
list<int> ke[1001];
bool check[1001];
struct ds_canh {
    int x, y;
};
void dfs(int u) {
    check[u] = true;
    for(int p : ke[u]) {
        if(!check[p]) dfs(p);
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        cin >> v >> e;
        ds_canh ds[e];
        for(int i = 0; i < e; i++) {
            cin >> ds[i].x >> ds[i].y;
            ke[ds[i].x].push_back(ds[i].y);
            ke[ds[i].y].push_back(ds[i].x);
        }
        for(int i = 0; i < e; i++) {
            ke[ds[i].x].remove(ds[i].y);
            ke[ds[i].y].remove(ds[i].x);
            for(int j = 0; j < 1001; j++) check[j] = 0;
            dem = 0;
            for(int k = 1; k <= v; k++) {
                if(!check[k]) {
                    dfs(k);
                    dem++;
                }
            }
            if(dem > 1) cout << ds[i].x << " " << ds[i].y << " ";
            ke[ds[i].x].push_back(ds[i].y);
            ke[ds[i].y].push_back(ds[i].x);
        }
        cout << endl;
		 for(int i = 0; i < 1001; i++) ke[i].clear();
    }
	return 0;
}
