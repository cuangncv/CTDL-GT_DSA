#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	int N; cin >> N;
    	vector<int> coins = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    	int count = 0;
    	for (int c : coins) {
        	count += N / c;   
        	N %= c;           
    	}
    	cout << count << "\n";
	}
    return 0;
}

