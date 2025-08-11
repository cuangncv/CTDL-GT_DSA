#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
void back(int sum, string s, int i, int a[]){
	if(sum % 2 != 0) v.push_back(s);
	for(int j = n - 1; j > i; j--){
		back(sum + a[j], s + " " + to_string(a[j]), j, a);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n, greater<int>());
		v.clear();
		for(int i = n - 1; i >= 0; i--){
			back(a[i], to_string(a[i]), i, a);
		}
		for(string x : v) cout << x << endl;
	}
	return 0;
}
