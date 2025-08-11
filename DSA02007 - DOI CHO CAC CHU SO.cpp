#include<bits/stdc++.h>
using namespace std;
int k, n;
string s;
void back(string &s, string q, int n, int cnt){
	for(int i = 0; i < n; i++){
		if(cnt == k) return;
		if(s[i] != q[i]){
			for(int j = n - 1; j > i; j--){
				if(s[j] == q[i]){
					swap(s[j], s[i]);
					cnt++;
					break;
				} 
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> k >> s;
		n = s.length();
		string q = s;
		sort(q.begin(), q.end(), greater<int>());
		back(s, q, n, 0);
		cout << s << endl;
	}
	return 0;
}
