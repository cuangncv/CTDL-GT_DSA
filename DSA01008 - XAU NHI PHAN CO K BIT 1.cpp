#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[17];
void Try(int i, int cnt){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if (j == 1) cnt ++;
		if (i == n){
			if(cnt == k){
				for (int h = 1; h <= n; h++){
					cout << X[h];
				}
				cout << endl;
			}
		}
		else{
			Try(i + 1, cnt);
		}
	}
}

int main(){
	int t ; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1, 0);
	}
}
