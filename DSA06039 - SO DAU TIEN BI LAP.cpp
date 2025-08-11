#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<long long> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		bool check = false;
		for(int i = 0; i < n; i++){
			if(count(a.begin(), a.end(), a[i]) > 1){
				cout << a[i] << endl;
				check = true;
				break;	
			} 
		}
		if(!check) cout << "NO" << endl;
	}
	return 0;
}
