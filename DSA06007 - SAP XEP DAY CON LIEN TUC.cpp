#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int T;
   cin >> T;
   while(T--){
      int N;
      cin >> N ;
      int A[N],B[N];
      for(int i=0;i<N;i++){
         cin >> A[i];
         B[i]=A[i];
      }
      sort(A,A+N);
      int x=-1,y=-1;
      for(int i=0;i<N;i++){
         if(A[i]!=B[i] && x==-1){
            x=i+1;
         }
         if(A[i]!=B[i] && x!=-1){
            y=i+1;
         }
      }
      cout <<x<<" "<<y<< endl;
   }
   return 0;
}
