#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, count;
        cin >> n >> k;
        int a[k], b[k];
        unordered_set<int> x, y;
        for(int i = 0; i < k; i++) {
            cin >> a[i];
            b[i] = a[i];
            x.insert(a[i]);
            y.insert(a[i]);
        }
        for(int i=k-1;i>=0;i--) {
            if(b[i] <= n - k + i) {
                b[i]++;
                for(int j = i + 1; j < k; j++) b[j] = b[j-1]+1;
                break;
            } 
        }
        for(int i = 0; i < k; i++) y.insert(b[i]);
        count = y.size() - x.size();
        if(count == 0) cout << k ;
        else cout << count ;
        cout << endl; 
    }
    return 0;
}   
