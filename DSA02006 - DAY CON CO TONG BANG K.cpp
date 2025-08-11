#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[11];
vector<string> v;
void back(int sum, int i, string s){
	if(sum == k){
		v.push_back(s);
		return;
	}
	if(sum > k) return;
	for(int j = i + 1; j < n; j++){
		back(sum + a[j], j, s + " " + to_string(a[j]));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		v.clear();
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			back(a[i], i, to_string(a[i]));
		}
		if(v.size() == 0) cout << "-1";
		for(auto x : v){
			cout << "[" << x << "] ";
		}
		cout << endl;
	}
}
