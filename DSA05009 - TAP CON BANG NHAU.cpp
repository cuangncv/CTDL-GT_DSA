#include<bits/stdc++.h>
using namespace std;
bool check;
int sum, n;
void back(int tong, int i, int a[]){
	if(check) return;
	if(tong + tong == sum){
		check = true;
		return;
	}
	if(tong + tong > sum) return;
	for(int j = i + 1; j < n; j ++){
		back(tong + a[j], j, a);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; 
		int a[n];
		sum = 0;
		check = false;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 != 0) cout << "NO" << endl;
		else{
			for(int i = 0; i < n; i++){
				back(a[i], i, a);
			}
			if(check) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
	}
	return 0;
}
