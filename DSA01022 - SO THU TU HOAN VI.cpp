#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s, key;
		for(int i = 1; i <= n; i++){
			s += to_string(i);
			int x; cin >> x;
			key += to_string(x);
		}
		int k = 0;
		do{
			k++;
			if(s == key){
				cout << k << endl;
				break;
			}
		} while(next_permutation(s.begin(), s.end()));
	}
	return 0;
}
