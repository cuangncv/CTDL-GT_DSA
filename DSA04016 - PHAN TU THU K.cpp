#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int m , n , k; cin >> m >> n >> k;
		vector<int> v;
		for(int i = 0; i < m + n ; i ++){
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << v[k - 1] << endl;
	}
	return 0;
}
