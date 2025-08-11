#include <bits/stdc++.h>
using namespace std;
int check(int a){
   if(a < 2) return 0;
   for(int i = 2; i <= sqrt(a); i++){
      if(a % i == 0) return 0;
   }
   return 1;
}
int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      int var=1;
      for(int i = 2; i <= n/2; i++){
          if(check(i) && check(n-i)) {
            cout << i <<" "<< n - i <<endl;
            var=0; 
            break;
          }
      }
      if(var) cout <<"-1"<<endl;
   }
}
