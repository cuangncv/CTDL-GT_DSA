#include<bits/stdc++.h>
using namespace std;
int n , k;
int X[20];
int cnt = 0;
bool snt(int q){
	if(q < 2) return false;
	for(int i = 2; i <= sqrt(q); i++){
		if(q % i == 0) return false;
	}
	return true;
}
void Try(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			cnt++;
			if(snt(cnt)){
				cout << cnt << ": ";
				for(int h = 1; h <= k; h++) cout << X[h] << " ";
				cout << endl;
			}
		}
		else Try(i + 1);
	}
}
int main(){
	cin >> n >> k;
	Try(1);
}
