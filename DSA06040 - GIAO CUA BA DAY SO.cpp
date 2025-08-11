#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		ll n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		ll a[n1], b[n2], c[n3];
		for(ll i = 0; i < n1; i++) cin >> a[i];
		for(ll i = 0; i < n2; i++) cin >> b[i];
		for(ll i = 0; i < n3; i++) cin >> c[i];
		ll x = 0, y = 0, z = 0;
		bool check = false;
		while(x < n1 && y < n2 && z < n3){
			if(a[x] == b[y] && b[y] == c[z]){
				cout << a[x] << " ";
				x++; y++; z++;
				check = true;
			}
			else if(a[x] < b[y] || a[x] < c[z]) x++;
			else if(b[y] < a[x] || b[y] < c[z]) y++;
			else if(c[z] < a[x] || c[z] < b[y]) z++;
		}
		if(!check) cout << "-1";
		cout << endl;
	}
	return 0;
}
