#include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   int main(){
      int t; cin >> t;
      while(t--){
        int n; cin >> n;
        ll k,a[n];
        cin >> k;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a + n);
        ll key=0;
        for(int i = 0; i< n - 2; i++){
         for(int j = i + 1; j < n - 1; j++){
           key += lower_bound(a + j + 1,a + n,k - a[i] - a[j])- a - j - 1;
         }
        }
        cout << key << endl;
      }
      return 0;
   }
