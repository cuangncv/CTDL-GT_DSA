#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
    stack<int> quang;
   while(t--){
      string tr;
      cin >> tr;
      if(tr=="PUSH"){
         int k;
         cin >> k;
         quang.push(k);
      }
      if(tr=="POP") {
         if(!quang.empty()){
            quang.pop();
         }
      }
      if(tr=="PRINT"){
         if(quang.size()==0) {
            cout << "NONE" << endl;
         }
         else{
            cout << quang.top()<< endl;
         }
      }
   }
}

