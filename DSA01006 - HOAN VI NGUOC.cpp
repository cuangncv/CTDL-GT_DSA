#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s = "";
		vector <string> q;
		for (int i = 1; i <= n; i++) s+= to_string(i);
		do{
			q.push_back(s);
		}while(next_permutation(s.begin(), s.end()));
		for(int i = q.size() - 1; i >= 0; i--){
			cout << q[i] << " ";
		}
		cout << endl;
	}
}
