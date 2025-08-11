#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	for(int i = 0; i < s.length()- 1; i++){
		if(abs((s[i] - '0') - (s[i+1] - '0')) == 1) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s= "";
		for(int i = 1; i <= n; i++) s += to_string(i);
		do{
			if(check(s)) cout << s << endl;
		} while(next_permutation(s.begin(), s.end()));
	}
}
