#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long long a[n];
	vector<int> x , y;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i % 2 == 0) x.push_back(a[i]);
		else y.push_back(a[i]);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	int q = 0, p = y.size() - 1;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			cout << x[q] << " ";
			q++;
		}
		else{
			cout << y[p] << " ";
			p--;
		}
	}
	return 0;
}
