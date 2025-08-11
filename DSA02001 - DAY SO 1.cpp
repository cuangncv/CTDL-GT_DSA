#include<bits/stdc++.h>
using namespace std;
void back(int i, int a[]){
	if (i == 0) return;
	if (i > 0){
		cout << "[" << a[0];
		for(int j = 1 ; j < i; j ++) cout << " " << a[j];
		cout << "]" << endl;
	}
	int b[i - 1];
	for (int j = 0; j < i - 1; j ++){
		b[j] = a[j] + a[j + 1];
	}
	back(i - 1, b);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		back(n, a);
	}
	return 0;
}

