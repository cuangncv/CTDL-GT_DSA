#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int cnt = 0;
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[i] + a[j] == k) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
