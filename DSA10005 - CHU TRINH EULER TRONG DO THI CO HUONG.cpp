#include<bits/stdc++.h>
using namespace std;
int euler(int v, int vao[], int ra[]){
	for(int i = 1; i <= v; i++){
		if(vao[i] != ra[i]) return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int v, e; cin >> v >> e;
		int vao[v + 1] = {}, ra [v + 1] = {};
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ra[x]++; vao[y]++; 
		}
		cout << euler(v, vao, ra) << endl;
	}
	return 0;
}
