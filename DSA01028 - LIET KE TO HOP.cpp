#include<bits/stdc++.h>
using namespace std;
int n, k;
set<int> s;
vector<int> v;
void Try(int i, string ss, int cnt){
	if (cnt == k){
		cout << ss << endl;
	}
	for(int j = i + 1; j < v.size(); j++){
		Try(j, ss + " " + to_string(v[j]), cnt + 1);
	}
}
int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	v = vector<int> (s.begin(), s.end());
	for (int i = 0; i < v.size() - 1; i++){
		Try(i, to_string(v[i]), 1);
	}
}
