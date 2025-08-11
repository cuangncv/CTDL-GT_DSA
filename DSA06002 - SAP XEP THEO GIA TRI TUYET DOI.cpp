#include <bits/stdc++.h>
using namespace std;
#define ll long long
int K;
struct teo{
   int a,b,t;
};
bool sapxep(teo x, teo y){
   if(x.t==y.t) return x.b<y.b;
   return x.t<y.t;
}
int main(){
   int T;
   cin >> T;
   while(T--){
      int N;
      cin >> N >>K;
      teo A[N];
      for(int i=0;i<N;i++){
         cin >> A[i].a;
         A[i].b=i;
         A[i].t=abs(K-A[i].a);
      }
      sort(A,A+N,sapxep);
      for(int i=0;i<N;i++){
        cout << A[i].a<<" ";
      }
      cout <<endl;
   }
   return 0;
}
