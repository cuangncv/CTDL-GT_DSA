#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<string> v;
int X[30];
void Try(int i){
	for (int j = X[i-1] + 1; j <= v.size() - k + i; j++){
		X[i] = j;
		if (i == k){
			for(int h = 1; h <= k; h++){
				cout << v[X[h] - 1] << " ";
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	cin >> n >> k;
	set<string> se;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		se.insert(s);
	}
	v = vector<string> (se.begin(), se.end());
	Try(1);
	return 0;
}
