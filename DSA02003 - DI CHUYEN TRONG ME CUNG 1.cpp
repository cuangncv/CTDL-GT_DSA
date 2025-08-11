#include <bits/stdc++.h>
using namespace std;
int n;
set<string> sets;
void solve(int a[20][20], int i, int j, string s, char c) {
    if(a[i][j] == 0 || i == n || j == n) return;
    s += c;
    if(i == n-1 && j == n-1) {
        sets.insert(s);
        return;
    }
    solve(a, i, j+1, s, 'R');
    solve(a, i+1, j, s, 'D');
}
int main() {
    int t; 
    cin >> t; 
    while(t--) {
        sets.clear();
        cin >> n;
        int a[20][20];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        if(a[0][0] == 0) {
            cout << "-1" << endl;
            continue;
        }
        solve(a, 0, 1, "", 'R');
        solve(a, 1, 0, "", 'D');
        if(sets.size() == 0) {
            cout << "-1" << endl;
        } else {
            for(string s : sets) {
                cout << s << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

