#include <bits/stdc++.h>
using namespace std;
int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      queue<int>quang;
      while(n--){
         int v; cin >> v;
         switch(v){
            case 1: cout << quang.size()<< endl; break;
            case 2: if(quang.size()==0) cout << "YES" << endl;
                    else cout << "NO" << endl;
                    break;
            case 3: int k; cin >> k; quang.push(k); break;
            case 4: if(quang.size()!=0) quang.pop();
                    break;
            case 5: if(quang.size()!=0) cout << quang.front() << endl;
                    else cout << "-1" << endl;
                    break; 
            case 6: if(quang.size()!=0) cout << quang.back() << endl;
                    else cout << "-1" << endl;  
                    break;      
         }
      }
   }
}
