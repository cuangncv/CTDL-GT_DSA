#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[6];
vector<string> v;
void back(int sum, int i, string s){
	if(sum == k){
		v.push_back(s);
		return;
	}
	if(sum > k) return;
	for(int j = i + 1; j < n; j++){
		back(sum + a[j], j, s + " " + to_string(a[j]));
	}
}
int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >>  a[i];
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		back(a[i], i, to_string(a[i]));
	}
	reverse(v.begin(), v.end());
	for(auto x : v) cout << x << endl;
	cout << v.size();
	return 0;
}
