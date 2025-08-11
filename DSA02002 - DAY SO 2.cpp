#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void back(int i, int a[]){
	if (i == 0) return;
	if (i > 0){
		string s = "[" + to_string(a[0]);
		for(int j = 1 ; j < i; j ++) s += " " + to_string(a[j]);
		s += "]";
		v.push_back(s);
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
		for (int i = v.size() - 1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
		v.clear();
	}
	return 0;
}
