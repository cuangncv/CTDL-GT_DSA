#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      queue<string>quang;
      quang.push("6");
      quang.push("8");
      int check=1;
      vector<string>qu;
      while(check){
         string em=quang.front();
         if(em.size()<=n){
            qu.push_back(em);
         }
         else{ check=0;}
         quang.pop();
         quang.push(em+"6");
         quang.push(em+"8");
      }
      cout << qu.size()<< endl;
      for(int i=0;i<qu.size();i++){
         cout << qu[i]<< " ";
      }
      cout << endl;
   }
}
