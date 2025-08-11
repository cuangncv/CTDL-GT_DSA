#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>ss;
int sx(int x,int y){
     if(ss[x]==ss[y] &&x!=y) return x<y;
     return ss[x]>ss[y];
}
int main(){
   int T; cin >> T;
   while(T--){
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
         cin >> a[i];
         ss[a[i]]++;
      }
      sort(a,a+n,sx);
      for(int i=0;i<n;i++){
         cout <<a[i]<<" ";
      }
       cout << endl;
       ss.clear();
   }
}
