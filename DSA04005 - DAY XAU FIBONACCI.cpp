#include<bits/stdc++.h>
using namespace std;
long long f[93];
char DQ(int n, long long i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i <= f[n - 2]) return DQ(n-2, i);
	else return DQ(n-1, i - f[n-2]) ;
}
int main(){
	int t; cin >> t;
	f[1] = 1, f[2] = 1;
	for (int i = 3; i <= 93 ; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
	while(t--){
		int n; long long i;
		cin >> n >> i;
		cout << DQ(n, i) << endl;
	}
}
