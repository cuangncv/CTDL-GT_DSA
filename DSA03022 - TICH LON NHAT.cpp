#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i ++) cin >> a[i];
	sort(a, a + n);
	long long t1 = a[0] * a[1], t2 = a[0] * a[1] * a[n - 1];
	long long t3 = a[n - 1] * a[n - 2], t4 = a[n - 1] * a[n - 2] * a[n - 3];
	cout << max({t1, t2, t3, t4});
	return 0;
}
