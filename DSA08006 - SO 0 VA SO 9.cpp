#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      queue<string>quang;
      string s="9"; quang.push(s);
      int check=1;
      while(check){
        string x = quang.front(); quang.pop();
        if(stoll(x)%n==0){
            cout << x << endl;
            check=0;
            break;
        }
        else{
            quang.push(x+"0");
            quang.push(x+"9");   
        }
      }
   }
}   
