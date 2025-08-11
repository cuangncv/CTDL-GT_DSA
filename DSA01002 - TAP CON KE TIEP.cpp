#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k];
		bool check = false;
		for (int i = 0; i < k; i++){
			cin >> a[i];
		}
		for (int i = k - 1; i >= 0; i--){
			if (a[i] != n){
				a[i]++;
				check = true;
				for (int j = i + 1; j < k; j++){
					a[j] = a[j-1] + 1;
				}
				break;
			}
			n--;
		}
		if (!check){
			for (int i = 0; i < k; i++){
				cout << i + 1 << " ";
			}
		}
		else{
			for (int i = 0; i < k; i++){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
