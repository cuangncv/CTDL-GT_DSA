#include <bits/stdc++.h>
using namespace std;
int main(){
   int N; cin >> N;
   int Q[N];
   map <int,int> se;
   for(int i = 0; i < N; i++){
    cin >> Q[i];
    se[Q[i]]++;
   }
   for(int i = 0; i < N; i++){
      if(se[Q[i]] != 0){
         cout << Q[i] <<" ";
         se[Q[i]]=0;
      }
   }
}

