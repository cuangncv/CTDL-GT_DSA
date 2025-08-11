#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--) {
      int n,k; cin >> n>> k;
      int a[n];
      for(int i=0;i<n;i++) cin >> a[i];
      int maxx=0;
      int h=k;
      while(k<=n){
         for(int i=k-h;i<k;i++){
             maxx=max(maxx,a[i]);
         }
         k++;
         cout << maxx <<" ";
         maxx=0;
      }
      cout << endl;
   }
}
