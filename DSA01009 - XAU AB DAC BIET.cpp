#include<bits/stdc++.h>
using namespace std;
string s;
int n,k;
vector<string>qu;
int check(string s){
   int c=0,var=0;
   for(int i=0;i<s.size();i++){
      if(s[i]=='A') c++;
      else c=0;
      if(c==k) var++;
      if(c>k) return 0;
   }
   if(var!=1) return 0;
   return 1;
}
void quang(int h){
   for(char x='A' ; x<='B';x++){
      s[h]=x;
      if(h==n-1){
         if(check(s)) qu.push_back(s);
      }
      else quang(h+1);
   }
}
int main(){
   cin >> n >> k;
   s.resize(n);
   quang(0);
   cout << qu.size() << endl;
   for(auto b:qu){
      cout << b << endl;
   }
}
