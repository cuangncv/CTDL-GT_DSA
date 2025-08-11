#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
      int n;
      cin >> n;
      long long a[n];
      for(int i=0;i<n;i++){
         cin >> a[i];
      }
      sort(a,a+n);
      long long q = 0;
      for(int i = 0;i < n; i++){
         q += a[i] * i;
         q %= 1000000007;
      }
      cout << q << endl;
    }
    return 0;
}
