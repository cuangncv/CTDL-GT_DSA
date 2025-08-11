#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<vector<int>> k;
bool snt(int q){
	if(q < 2) return false;
	for(int i = 2; i <= sqrt(q); i++){
		if(q % i == 0) return false;
	}
	return true;
}
void back(int sum, int i, vector<int> &e){
	if(snt(sum)) k.push_back(e);
	for(int j = i + 1; j < n; j++){
		e.push_back(a[j]);
		back(sum + a[j], j, e);
		e.pop_back();
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		a.clear(); k.clear();
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end(), greater<int>());
		vector<int> e;
		for(int i = 0; i < n; i++){
			e.push_back(a[i]);
			back(a[i], i, e);
			e.clear();
		}
		sort(k.begin(), k.end());
		for(auto &p : k){
			for(auto z : p) cout << z << " ";
			cout << endl;
		}
	}
	return 0;
}
