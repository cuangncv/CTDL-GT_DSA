#include<bits/stdc++.h>
using namespace std;
int n;
bool check(string s){
	string q = s;
	reverse(s.begin(), s.end());
	return q == s;
}
void Try(int i, string s){
	if(i == n){
		if(check(s)) cout << s << endl;
		return;
	}
	Try(i + 1, s + " 0");
	Try(i + 1, s + " 1");
}
int main(){
	cin >> n;
	Try(1, "0");
	Try(1, "1");
	return 0;
}
