#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[15], A[15];
int dem;
bool comp (){
	for (int i = 0; i < k; i++){
		if(X[i + 1] != A[i + 1]) return false;
	}
	return true;
}
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			dem ++;
			if(comp()){
				cout << dem << endl;
				return;
			}
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		dem = 0;
		cin >> n >> k;
		for (int i = 0; i < k; i ++){
			cin >> A[i+1];
		}
		Try(1);
	}
}
