#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ; cin >> n;
	vector<int> v;
	for(int i = 1; i <= n; i ++){
		v.push_back(i);
	}
	int cnt = 0;
	do{
		cnt++;
		cout << cnt << ": ";
		for(int x : v) cout << x << " ";
		cout << endl;
	} while(next_permutation(v.begin(), v.end()));
	return 0;
}
