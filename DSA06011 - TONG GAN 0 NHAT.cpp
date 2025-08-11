#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int T;
   cin >> T;
   while(T--){
      int N;
      cin >> N ;
      ll A[N];
      for(int i=0;i<N;i++){
         cin >> A[i];
      }
      ll x=1e9;
      ll minn=1e9;
      ll k;
      for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
          x=min(x,abs(A[i]+A[j]));
          if(minn!=x ){
            minn=x;
            k=A[i]+A[j];
          }
        }
      }
      cout << k<<endl;
   }
   return 0;
}
