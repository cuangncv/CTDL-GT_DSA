#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;
		vector<int> ke[v + 1];
		while(e--){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(auto a : ke[i]) cout << a << " ";
			cout << endl;
		}
	}
	return 0;
}
