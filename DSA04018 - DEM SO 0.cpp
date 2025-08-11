#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> q(n);
		for (int i = 0; i < n; i ++) cin >> q[i];
		cout << lower_bound(q.begin(), q.end(), 1) - q.begin() << endl;
	}
}
