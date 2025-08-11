#include<bits/stdc++.h>
using namespace std;
int n, x;
vector<int>a;
vector<string> k;
void back(int sum, int i, string s){
	if(sum > x) return;
	if(sum == x){
		k.push_back(s);
		return;
	}
	for(int j = i; j < n; j++){
		back(sum + a[j], j, s + " " + to_string(a[j]));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		a.clear(); k.clear();
		for(int i = 0; i < n; i++){
			int q; cin >> q;
			a.push_back(q);
		}
		sort(a.begin(), a.end());
		for(int i = 0; i < n; i++){
			back(a[i], i, to_string(a[i]));
		}
		if(k.size() == 0) cout << "-1";
		else {
			cout << k.size() << " ";
			for(auto p : k){
				cout << "{" << p << "} ";
			}
		}
		cout << endl;
	}
	return 0;
}
