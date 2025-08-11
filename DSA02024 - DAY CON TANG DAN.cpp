#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int n;
void back(string s, int dem, int i, int a[]){
	if(dem > 1) v.push_back(s);
	for(int j = i + 1; j < n; j++){
		if(a[j] > a[i]) back(s + " " + to_string(a[j]), dem + 1, j, a);
	}
}
int main(){
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		back(to_string(a[i]), 1, i, a);
	}
	sort(v.begin(), v.end());
	for(auto s : v){
		cout << s << endl;
	}
}
