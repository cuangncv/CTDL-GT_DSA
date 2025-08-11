#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(long long i = 0; i < n; i++) cin >> a[i];
		long long dem = 0;
		sort(a, a + n);
		for(long long i = 0; i < n - 1; i++){
			dem += (upper_bound(a + i + 1, a + n, k - a[i]) - a) - (lower_bound(a + i + 1, a + n, k - a[i]) - a);
		}
		cout << dem << endl;
	}
	return 0;
}
