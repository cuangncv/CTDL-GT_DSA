#include<bits/stdc++.h>
using namespace std;
int n;
void back(int sum, int i, string s){
	if(sum == n){
		cout << "(" << s << ") ";
		return;
	} 
	if(sum > n) return;
	for(int j = i; j >= 1; j--){
		back(sum + j, j, s + " " + to_string(j));
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = n; i >= 1; i--){
			back(i, i, to_string(i));
		}
		cout << endl;
	}
	return 0;
}
