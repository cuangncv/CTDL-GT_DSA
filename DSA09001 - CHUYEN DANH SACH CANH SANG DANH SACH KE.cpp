#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int e, v;
		cin >> v >> e;
		int ke[v + 1][v + 1] = {};
		while(e--){
			int x, y;
			cin >> x >> y;
			ke[x][y] = 1;
			ke[y][x] = 1;
		} 
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(int j = 1; j <= v; j++){
				if(ke[i][j] == 1) cout << j << " ";
			}
			cout << endl;
		}
	}
}
