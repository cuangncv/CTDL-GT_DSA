#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   cin.ignore();
   while(t--){
      string s;
      getline(cin,s);
      stack<string>quang;
      stringstream ss(s);
      string word;
      while(ss >> word){
          quang.push(word);
      }
      while(!quang.empty()){
         cout << quang.top()<<" ";
         quang.pop();
      }
      cout << endl;
   }
}

