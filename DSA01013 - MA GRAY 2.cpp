#include <bits/stdc++.h>
using namespace std;
void out(){
   string s; cin >> s;
   string z = s;
   cout << s[0];
   int x = 1, y = 0;
   for(int i = 1; i < s.size(); i++){
      if((s[i]-'0') == (z[i-1]-'0') ^ x) {
	  	cout << x;
		z[i] = '0' + x;
	  }
      else if((s[i] - '0') == (z[i-1] - '0') ^ y){
	  			cout << y;
				z[i] = '0' + y;
			}
   }
   cout <<endl;
}
int main (){
   int t; cin >> t;
   while(t--){
      out(); 
   }
   return 0;
}
