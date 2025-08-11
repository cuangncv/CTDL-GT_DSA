#include<bits/stdc++.h>
using namespace std;
int k;
vector<string> v;
void back(string s, int dem, int i){
	if(dem == k){
		cout << s << endl;
		return;
	}
	for(int j = i + 1; j < v.size(); j++){
		back(s + " " + v[j], dem + 1, j);
	}
}
int main(){
	int n; cin >> n >> k;
	set <string> se;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		se.insert(s);
	}
	v = vector<string> (se.begin(), se.end());
	for(int i = 0; i < v.size(); i++){
		back(v[i], 1, i);
	} 
}
