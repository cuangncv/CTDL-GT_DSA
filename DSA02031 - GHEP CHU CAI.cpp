#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	int a = s.find('A');
	if(s.length() <= 4){
		if(a == 0 || a == s.length() - 1) return true;
		return false;
	}
	int b = s.find('E');
	if(abs(a-b) == 1 || abs(a-b) == s.length() - 1){
		return true;
	}
	return false;
}
int main(){
	char x;
	cin >> x;
	string s = "";
	for(char i = 'A'; i <= x; i++) s += i;
	do{
		if(check(s)) cout << s << endl;
	}
	while(next_permutation(s.begin(), s.end()));
}
