#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--) {
      int n; cin >> n;
      vector<int> a(n);
      vector<vector<int>> ss;
      for(int i=0;i<n;i++){
         cin >> a[i];
      }
      for(int i=0;i<n-1;i++){
         int k=0;
         for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) {swap(a[j],a[j+1]);
            k=1;}
         }
         if(k){
         ss.push_back(a);}
         else break;
      }
      for(int i=ss.size()-1;i>=0;i--){
         cout <<"Buoc "<<i+1<<": ";
         for(int j=0;j<ss[i].size();j++){
            cout << ss[i][j]<<" ";
         } cout << endl;
      }
   }     
}

