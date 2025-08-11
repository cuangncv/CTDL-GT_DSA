#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int a[m][n];
		for (int i = 0; i < m; i++){
		   for (int j = 0; j < n; j++){ 
			 cin >> a[i][j];
			 if(i==0||j==0) a[i][j] = 1;
			 else a[i][j] = a[i][j-1] + a[i-1][j];
		   }
		}
		cout << a[m-1][n-1] << endl;
	}
	return 0;
}
