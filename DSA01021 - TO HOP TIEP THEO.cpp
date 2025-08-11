#include<bits/stdc++.h>
using namespace std;
int cmp(int a[], int b[], int k){
	int dem = 0;
	for (int i = 0; i < k; i++){
		for(int j = 0; j < k; j++){
			if(a[i] == b[j]){
				dem++;
				break;
			}
		}
	}
	return k-dem;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k], b[k];
		for (int i = 0; i < k; i++){
			cin >> a[i];
			b[i] = a[i];
		} 
		bool check = false;
		for (int i = k - 1; i >= 0; i--){
			if(a[i] != n){
				b[i] = a[i] + 1;
				for(int j = i + 1; j < k; j++){
					b[j] = b[j - 1] + 1;
				}
				check = true;
				break;
			}
			n--;
		}
		if(!check) cout << k << endl;
		else{
			cout << cmp(a, b, k) << endl;
		}
	}
}
