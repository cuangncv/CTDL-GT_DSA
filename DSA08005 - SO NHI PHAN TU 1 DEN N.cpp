#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      queue<string>quang;
      string s="1"; quang.push(s);
      for(int i=1;i<=n;i++){
         string em=quang.front();
         cout << em << " ";
         quang.pop();
         quang.push(em+"0");
         quang.push(em+"1");
      }
      cout << endl;
   }
}
