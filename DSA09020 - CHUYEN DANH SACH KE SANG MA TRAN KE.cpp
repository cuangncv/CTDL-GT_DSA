#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int m[n + 1][n + 1] = {};
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin >> ws, s);
		stringstream ss(s);
		int x;
		while(ss >> x){
			m[i][x] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
