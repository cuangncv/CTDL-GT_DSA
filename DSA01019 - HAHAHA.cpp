#include<bits/stdc++.h>
using namespace std;
int n;
void Try(int i, string s){
	if (i > n) return;
	if (i == n){
		cout << s << endl;
	}
	else{
		Try(i + 1, s + "A");
		Try(i + 2, s + "HA");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(2, "HA");
	}
	return 0 ;
}
