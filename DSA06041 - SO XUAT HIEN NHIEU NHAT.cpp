#include <bits/stdc++.h>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--) {
      int n; cin >> n;
      int a[n];
      map<int,int>ps;
      int maxx=0;
      for(int i=0;i<n;i++){ cin >> a[i];
         ps[a[i]]++;}
         int check=0;
      for(int i=0;i<n;i++){
          maxx=max(maxx,ps[a[i]]);
          if(maxx==ps[a[i]]) check=a[i];
      }
      if(maxx>n/2) cout << check<<endl;
      else cout << "NO"<<endl;
   }
}
