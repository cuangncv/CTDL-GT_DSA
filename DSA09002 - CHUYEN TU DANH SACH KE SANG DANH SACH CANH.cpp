#include<bits/stdc++.h>
using namespace std;
vector<int> ke[51];
int main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin >> ws, s);
		stringstream ss(s);
		int x;
		while(ss >> x) {
			if(x > i){
				ke[i].push_back(x);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(auto q : ke[i]){
			cout << i << " " << q;
			cout << endl;
		} 
	}
	return 0;
}
