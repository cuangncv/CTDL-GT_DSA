#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
struct matrix {
    ll x11 = 0, x12 = 1, x21 = 1, x22 = 1;
};
matrix operator* (matrix a, matrix b) {
    matrix res;
    res.x11 = ((a.x11 * b.x11) % mod + (a.x12 * b.x21) % mod) % mod;
    res.x12 = ((a.x11 * b.x12) % mod + (a.x12 * b.x22) % mod) % mod;
    res.x21 = ((a.x21 * b.x11) % mod + (a.x22 * b.x21) % mod) % mod;
    res.x22 = ((a.x21 * b.x12) % mod + (a.x22 * b.x22) % mod) % mod;
    return res;
}
matrix tinh(matrix m, int n) {
    if(n == 1) return m;
    matrix tmp = tinh(m, n/2);
    if(n % 2 == 0) return tmp * tmp;
    else return tmp * tmp * m;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        matrix z;
        cout << tinh(z, n+1).x11 << endl;
    }
}
