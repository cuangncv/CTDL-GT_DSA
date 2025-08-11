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
      int check;
      for(auto x:tr){
         check=1;
         if(x==')'){
           while(quang.top()!='('){
            char k=quang.top();
            if(k=='+' || k=='-' || k=='*'|| k=='/') check=0;
            quang.pop();
           }
           if(check){
            cout <<"Yes"<<endl;
            break;
           }
           quang.pop();
         }
         else{
             quang.push(x);
         }
      }
      if(check==0) cout <<"No"<<endl;
   }
}

