#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[16];
void Try(int i){
	for (int j = X[i-1]+1; j <= n - k + i; j++){
		X[i] = j;
		if (i == k){
			for(int h = 1;h <= k; h++){
				cout << X[h];
			}
			cout << " ";
		} else{
			Try(i+1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}
