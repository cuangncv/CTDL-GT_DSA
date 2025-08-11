#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		ll n, X;
		cin >> n >> X;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin >> a[i];
		}
		if(binary_search(a, a+n, X)) cout << "1" << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
