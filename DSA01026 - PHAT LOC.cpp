#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
void Try(int i, string s){
	if (i > n) return;
	if (i == n){
		if(s.find("6666") == -1) cout << s << endl;
		return;
	}
	Try(i+1, s + "6");
	Try(i + 2, s + "86");
}
int main(){
	cin >> n;
	Try(2, "86");
	return 0;
}
