#include<bits/stdc++.h>
using namespace std;
int euler(int v, int ke[]){
	int dem = 0;
	for(int i = 1; i <= v; i++) if(ke[i] % 2 == 1) dem++;
	if(dem == 2) return 1;
	if(dem == 0) return 2;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;
		int ke[1001] = {};
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
			ke[x]++;
			ke[y]++;
		}
		cout << euler(v, ke) << endl;
	}
}
