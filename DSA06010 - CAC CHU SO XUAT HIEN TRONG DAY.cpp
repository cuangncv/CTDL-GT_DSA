#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <char> v; 
		for(int i = 0; i < n; i++){
			string s; cin >> s;
			for(auto x : s) v.insert(x);
		}
		
		for(auto x : v) cout << x << " ";
		cout << endl;
	}
	return 0;
}
