#include<bits/stdc++.h>
using namespace std;
int n, p, s;
vector<int> v;
vector<string> q;
bool checksnt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
void back(int sum, int sl, int i, string o){
	if(sum > s) return;
	if(sl > n) return;
	if(sum == s && sl == n){
		q.push_back(o);
		return;
	}
	for(int j = i + 1; j < v.size(); j++){
		back(sum + v[j], sl + 1, j, o + " " + to_string(v[j]));
	}
}
int main(){
	int t; cin >> t;
	for(int i = 2; i <= 200; i++){
		if(checksnt(i)) v.push_back(i);
	}
	while(t--){
		cin >> n >> p >> s;
		q.clear();
		int e = upper_bound(v.begin(), v.end(), p) - v.begin();
		for(int i = e; i < v.size(); i++){
			back(v[i], 1, i, to_string(v[i]));
		}
		cout << q.size() << endl;
		for(string z : q) cout << z << endl;
	}
}

