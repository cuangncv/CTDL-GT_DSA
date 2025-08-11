#include <bits/stdc++.h>
using namespace std;
int n,a[11];
void out(){
   cout << a[1];
   for(int i = 2; i <= n; i++){
      int res = a[i]^a[i-1]; cout << res;
   }
   cout << " ";
}
void quang(int i){
   for(int j = 0; j <= 1; j++){
      a[i] = j;
      if(i == n) out();
      else quang(i+1);
   }
}
int main (){
   int t; cin >> t;
   while(t--){
      cin >> n;
      quang(1); cout << endl;
   }
   return 0;
}
