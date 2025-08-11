#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;  cin >> t;
    while(t--) {
        string c;
        cin >> c;
        if(c[0]=='0') cout << c[0] << endl;
        else{
        long long dp[10000]={0};
        dp[0]=1;
        if(c[1]!='0' && (c[0] == '1' || (c[1]<='6' && c[0] == '2'))) dp[1]=2;
        else if(c[1]=='0' && c[0]>'2') dp[1]=0;
        else dp[1]=1;
        for(int i=2;i<c.size();i++){
            if(c[i]>'0') dp[i]=dp[i-1];
            if(c[i-1] == '1' || (c[i]<='6' && c[i-1] == '2')){
                dp[i]+=dp[i-2];
            }
        }
        cout << dp[c.size()-1] << endl;
        }
    }
    return 0;
}
