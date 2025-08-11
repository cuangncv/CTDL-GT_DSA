#include<bits/stdc++.h>
using namespace std;
int n;
vector <string> v;
void back(int i, int sum, string s){
	if(sum == n){
		v.push_back(s);
		return;
	}
	if(sum > n) return;
	for(int j = i; j >= 1; j--){
		back(j, sum + j, s + " " + to_string(j));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i = n; i >= 1; i--){
			back(i, i, to_string(i));
		}	
		cout << v.size() << endl;
		for(string z : v) cout << "(" << z << ") ";
		cout << endl; 
	}
}
