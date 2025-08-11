#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		set <int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		} 
		if(se.size() < 2) cout << "-1" << endl;
		else{
			auto i = se.begin();
			int q = *i;
			i++;
			int p = *i;
			cout << q << " " << p << endl;
		}
	}
	return 0;
}
