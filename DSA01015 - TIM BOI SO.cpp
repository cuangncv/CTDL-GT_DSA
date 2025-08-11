#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n; cin >> n;
      queue<string> quang;
      quang.push("9");
      while(quang.size()){
         string v=quang.front();
         quang.pop();
         if(stoll(v)%n==0){
            cout << v << endl;
            break;
         }
         quang.push(v+"0");
         quang.push(v+"9");
      }
   }
   return 0;
}
