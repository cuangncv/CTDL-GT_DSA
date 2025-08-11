#include<iostream>
using namespace std;
#define mod 1000000007
#define ll long long
ll M[101][101];
void ac(ll A[101][101], ll B[101][101], int n) {
	ll N[101][101];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			N[i][j] = 0;
			for (int l = 0; l < n; l++) {
				N[i][j] += ((A[i][l] * B[l][j]) % mod);
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) A[i][j] = N[i][j] % mod;
    }
}
void quang(ll X[101][101], int n, int k) {
	if(k==1) return;
	quang(X, n, k / 2);
	ac(X, X, n);
	if (k % 2 != 0) ac(X, M, n);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		ll X[101][101];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
                cin >> X[i][j];
                M[i][j] = X[i][j];
            }
		}
		quang(X, n, k);
		ll key = 0;
		for (int i = 0; i < n; i++) {
			key+=X[i][n - 1];
			key%=mod;
		}
		cout << key << endl;
	}
    return 0;
}
