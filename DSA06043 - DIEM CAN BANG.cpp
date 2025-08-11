#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		int a[n];
		int sum  = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		int vt = - 1;
		int s = 0;
		for(int i = 0; i < n; i++){
			if(i > 0) s += a[i - 1];
			if(sum - a[i] == s + s){
				vt = i + 1;
				break;
			}
		}
		cout << vt << endl;;
	}
	return 0;
}
