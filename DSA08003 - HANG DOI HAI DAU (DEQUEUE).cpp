#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   deque<int> quang;
   while(t--){
      string s; cin >> s;
      if(s=="PUSHFRONT"){
         int k; cin >> k;
         quang.push_front(k);
      }
      if(s=="PRINTFRONT"){
         if(quang.size()!=0) cout << quang.front() << endl;
         else cout <<"NONE"<<endl;
      } 
      if(s=="POPFRONT") {
         if(quang.size()!=0) quang.pop_front();
      }
      if(s=="PUSHBACK"){
         int p; cin >> p;
         quang.push_back(p);
      }
      if(s=="PRINTBACK"){
         if(quang.size()!=0) cout << quang.back() << endl;
         else cout <<"NONE"<<endl;
      } 
      if(s=="POPBACK") {
         if(quang.size()!=0) quang.pop_back();
      }
   }
}
