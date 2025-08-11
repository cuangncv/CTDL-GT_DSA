#include<bits/stdc++.h>
using namespace std;
bool sx(pair<int, int> p1, pair<int, int> p2){
	return p1.second < p2.second;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<int, int> p[n];
		for(int i = 0; i < n; i++) cin >> p[i].first;
		for(int i = 0; i < n; i++) cin >> p[i].second;
		sort(p, p + n, sx);
		int dem = 1, q = p[0].second;
		for(int i = 1; i < n; i++){
			if(p[i].first >= q){
				dem++;
				q = p[i].second;
			}
		}
		cout << dem << endl;
	}
}
