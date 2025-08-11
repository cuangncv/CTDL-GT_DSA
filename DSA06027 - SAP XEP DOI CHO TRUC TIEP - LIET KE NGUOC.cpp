#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--){
      int s;
      cin >> s;
      vector<int>a(s);
      vector<vector<int>> ss;
      for(int i = 0; i < s; i++){
          cin >> a[i];
      }
      int check = 1;
      for(int i = 0;i < s - 1; i++){
         for(int j = i + 1; j < s; j++){
         if(a[i] > a[j]){
           swap(a[i], a[j]);
         }
         }
         ss.push_back(a);
      }
      for(int i = ss.size() - 1; i >= 0; i--){
         cout << "Buoc " << i + 1 << ": ";
         for(int j = 0; j <ss[i].size(); j++){
            cout << ss[i][j] << " ";
         }
         cout << endl;
      }
   }
}
