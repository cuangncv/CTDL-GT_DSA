#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   cin.ignore();
   while(t--){
      stack<char> quang;
      string tr;
      getline(cin,tr);
      int key=0;
      for(auto x:tr){
         if(x=='(') quang.push(x);
         else{
            if(quang.size()==0){
               quang.push('(');
               key++;
            }
            else quang.pop();
         }
      }
      cout << (quang.size()/2)+key << endl;
   }
}

