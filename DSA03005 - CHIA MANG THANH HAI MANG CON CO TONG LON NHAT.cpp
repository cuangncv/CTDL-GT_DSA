#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[n];
		long long sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		sort(a, a + n);
		if(k > n / 2) reverse(a, a+n);
		int s = 0;
		for(int i = 0; i < k; i++) s += a[i];
		cout << abs(sum - 2 * s) << endl;
	}
}
