#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int stt; cin >> stt;
		string s; cin >> s;
		cout << stt << " ";
		if(next_permutation(s.begin(), s.end())){
			cout << s << endl;
		} else cout << "BIGGEST" << endl;
	}
}
