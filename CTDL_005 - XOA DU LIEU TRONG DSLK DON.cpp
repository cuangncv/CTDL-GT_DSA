#include <bits/stdc++.h>
using namespace std;
int main(){
   int N; cin >> N;
   int Q[N];
   for(int i = 0; i < N; i++){
    cin >> Q[i];
   }
   int p; cin >> p;
   for(int i = 0; i < N; i++){
    if(Q[i] != p) cout << Q[i]<<" ";
   }
}
