#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		ll n, m ;
		cin >> n >>  m;
		ll a[n], b[m];
		vector<ll> v;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		for(ll i = 0; i < m; i++){
			cin >> b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(), v.end());
		for(ll q : v) cout << q << " ";
		cout << endl;
	}
	return 0;
}
