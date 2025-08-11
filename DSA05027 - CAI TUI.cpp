#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n,v; cin >> n >> v;
        int a[n+1], c[n+1];
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) cin >> c[i];
        int dp[n+1][v+1];
        for(int j=0; j<=v ;j++) dp[0][j]=0;
        for(int i=1; i<=n ;i++) {
            for(int j=0; j<=v; j++) {
                if(a[i]<=j) dp[i][j]=max(dp[i-1][j],c[i] + dp[i-1][j-a[i]]); 
                else dp[i][j] = dp[i-1][j];
            }
        }
        cout << dp[n][v] << endl;
    }
    return 0;
}
