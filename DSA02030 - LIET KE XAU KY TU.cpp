#include<bits/stdc++.h>
using namespace std;
vector<string> v;
char c;
int k;
void back(string s, int dem, char q){
	if(dem == k){
		v.push_back(s);
		return;
	} 
	for(char j = q; j <= c ; j++){
		back(s +j, dem + 1, j);
	}
}
int main(){
	cin >> c;
	cin >> k;
	for(char x = 'A'; x <= c; x++){
		back(string(1, x), 1, x);
	}
	sort(v.begin(), v.end());
	for(auto s : v){
		cout << s << endl;
	}
}
