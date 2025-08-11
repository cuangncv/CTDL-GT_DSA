#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   queue<int> quang;
   while(t--){
      string s; cin >> s;
      
      if(s=="PUSH"){
         int k; cin >> k;
         quang.push(k);
      }
      else if(s=="PRINTFRONT"){
         if(quang.size()!=0) cout << quang.front() << endl;
         else cout <<"NONE"<<endl;
      } else {
         if(quang.size()!=0) quang.pop();
      }
   }
}
