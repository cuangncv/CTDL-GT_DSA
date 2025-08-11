#include <bits/stdc++.h>
using namespace std;
int main(){
   string sd;
   stack<int>quang;
   while(cin >> sd){
      
      if(sd=="push"){
         int k; cin >> k;
         quang.push(k);
      }
      if(sd=="pop"){
         quang.pop();
      }
      if(sd=="show"){
         if(quang.size()==0){
            cout <<"empty"<< endl;
            continue;
         }
         else{
            vector<int>em;
            while(!quang.empty()){
               int h=quang.top();
               em.push_back(h);
               quang.pop();
            }
            for(int i=em.size()-1;i>=0;i--){
               cout << em[i] << " ";
               quang.push(em[i]);
            }
            cout << endl;
         }
      }
   }
}
