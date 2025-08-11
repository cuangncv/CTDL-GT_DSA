#include <bits/stdc++.h>
using namespace std;
set<string> se;
int a[10][10], v[10][10],n;
void quang( int i, int j, string s) {
    if(i < 0 || j < 0 || i >= n || j >= n || a[i][j] == 0 || v[i][j] == 1) return;
    v[i][j] = 1;
    if(i == n-1 && j == n-1) {
        se.insert(s);
        v[i][j] = 0;
        return;
    }
    quang( i+1, j, s + 'D');
    quang( i, j+1, s + 'R');
    quang( i-1, j, s + 'U');
    quang( i, j-1, s + 'L');
    v[i][j] = 0;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                v[i][j] = 0;
            }
        }
        quang(0, 0, "");
        if(se.size() == 0) cout << -1;
        else {
            for(auto p: se) {
                cout << p << " ";
            }
        }
        cout << endl;
		se.clear();
    }
	return 0;
}
