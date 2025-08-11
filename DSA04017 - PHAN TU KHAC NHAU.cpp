#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin  >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n], b[n - 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++) cin >> b[i];
		ll key = n;
		for(int i = 0; i < n - 1; i++){
			if(a[i] != b[i]){
				key = i + 1;
				break;
			}
		}
		cout << key << endl;
	}
	return 0;
}
