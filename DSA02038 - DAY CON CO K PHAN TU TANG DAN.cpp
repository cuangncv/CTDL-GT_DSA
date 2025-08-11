#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[15], X[15];
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			for(int h = 1; h <= k; h++){
				cout << a[X[h] - 1] << " ";
			}
			cout << endl;
		}
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		Try(1);
	}
}
