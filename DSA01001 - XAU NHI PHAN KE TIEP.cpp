#include<bits/stdc++.h>
using namespace std;

string xau2p(string s){
	int n;
	n = s.length();
	for (int i = n-1; i >= 0; i--){
		if (s[i] == '1'){
			s[i] = '0';
		} else{
			s[i] = '1';
			break;
		}
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << xau2p(s) << endl;
	}
}
