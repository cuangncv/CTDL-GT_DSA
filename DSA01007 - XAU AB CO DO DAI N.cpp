#include<bits/stdc++.h>
using namespace std;
int n;
char X[11];
void Try(int i){
	for(char j = 'A'; j <= 'B'; j++){
		X[i] = j;
		if (i == n){
			for (int h = 1; h <= n; h++){
				cout << X[h] ;
			}
			cout << " ";
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	int t ; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
