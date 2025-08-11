#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      string s; int k;
      cin >> k >> s;
      map<char, int> ss;
      for(char lo: s) ss[lo]++;
      int maxx = 0;
      for(char x = 'A'; x <= 'Z'; x++) maxx = max(maxx, ss[x]);
      if(s.size() %k == 0){
         if(maxx <= s.size() /k) cout << "1" << endl;
         else cout << "-1" << endl;
      }
      else {
         if(maxx <= s.size() /k +1) cout << "1" << endl;
         else cout << "-1" << endl;
      }
   }
}
