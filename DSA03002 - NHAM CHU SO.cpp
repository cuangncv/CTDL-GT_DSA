#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	string maxa = a, maxb = b, mina = a, minb = b;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '5'){
			maxa[i] = '6';
		}
		if(a[i] == '6'){
			mina[i] = '5';
		}
	}
	for(int i = 0; i < b.length(); i++){
		if(b[i] == '5'){
			maxb[i] = '6';
		}
		if(b[i] == '6'){
			minb[i] = '5';
		}
	}
	cout << stoi(mina) + stoi(minb) << " "<<stoi(maxa) + stoi(maxb); 
}
