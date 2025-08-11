#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string>v;
void back(string k, int i){
	if(k.length() <= n) v.push_back(k);
	else return;
	for(int j = i + 1; j < n; j++){
		back(k + s[j], j);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 0; i < n; i++){
			back(string(1, s[i]), i);
		}
		sort(v.begin(), v.end());
		for(string q : v){
			cout << q << " ";
		}
		cout << endl;
		v.clear();
	}
	return 0;
}
