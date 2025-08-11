#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      long long n; cin >> n;
      queue<string>quang;
      string s="1"; quang.push(s);
      int check=1;
      while(check){
         string em=quang.front();
         if(stoll(em)%n==0){
            cout << em << endl;
            check=0;
         }
         quang.pop();
         quang.push(em+"0");
         quang.push(em+"1");
      }
   }
}
