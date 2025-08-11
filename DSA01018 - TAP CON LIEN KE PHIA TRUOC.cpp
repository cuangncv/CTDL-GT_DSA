#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int X[k];
		int q[n] = {}; 
		for(int i = 0; i < k; i++){
			cin >> X[i];
			q[X[i] - 1] = 1;
		} 
		next_permutation(q, q + n);
		for(int i = 0; i < n; i++){
			if(q[i] == 1) cout << i + 1 << " ";
		}
		cout << endl;
	}
}
