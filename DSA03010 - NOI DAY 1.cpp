#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(){
   int T;
   cin >> T;
   while(T--){
      int n;
      cin >> n;
      multiset<ll> q;
      ll a[n];
      for(int i = 0; i < n; i++){
         cin >> a[i];
         q.insert(a[i]);
      }
      ll elm = 0;
      while(q.size() != 1){
         ll v = *q.begin();
         q.erase(q.begin());
         ll t = *q.begin();
         q.erase(q.begin());
         elm += v + t;
         q.insert(v + t);
      }
      cout << elm << endl;
   }
   return 0;
}

