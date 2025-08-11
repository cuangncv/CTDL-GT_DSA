#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      long long n; cin >> n;
      queue<string>quang;
      string s="1"; quang.push(s);
      int check=1;
      int key=0;
      while(check){
         string em=quang.front();
         if(stoll(em)<=n){
            key+=1;
         }
         else{
            check=0;
         }
         quang.pop();
         quang.push(em+"0");
         quang.push(em+"1");
      }
      cout << key << endl;
   }
}
