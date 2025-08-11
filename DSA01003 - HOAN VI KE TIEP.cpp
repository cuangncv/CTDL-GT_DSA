#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x[n];
		for(int i = 0; i < n; i++){
			cin >> x[i];
		}
		next_permutation(x, x+n);
		for(int a : x){
			cout << a << " ";
		}
		cout << endl;
	}
}
