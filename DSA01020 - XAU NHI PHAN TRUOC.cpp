#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string x; cin >> x;
		for(int i = x.length() - 1; i >= 0; i--){
			if(x[i] == '0') x[i] = '1';
			else{
				x[i] = '0';
				break;
			}
		}
		cout << x << endl;
	}
}
