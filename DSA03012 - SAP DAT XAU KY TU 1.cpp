#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      string s;
      cin >> s;
      map<char, int> ss;
      for(char lo: s) ss[lo]++;
      int maxx = 0;
      for(char x = 'a'; x <= 'z'; x++) maxx = max(maxx, ss[x]);
      if(s.size() %2 == 0){
         if(maxx <= s.size() /2) cout << "1" << endl;
         else cout << "-1" << endl;
      }
      else {
         if(maxx <= s.size() /2 +1) cout << "1" << endl;
         else cout << "-1" << endl;
      }
   }
}
