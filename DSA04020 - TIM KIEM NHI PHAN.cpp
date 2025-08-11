#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		bool check = binary_search(a, a + n, k);
		if(!check) cout << "NO" << endl;
		else{
			cout << upper_bound(a, a + n, k) - a << endl;
		}
	}
}
