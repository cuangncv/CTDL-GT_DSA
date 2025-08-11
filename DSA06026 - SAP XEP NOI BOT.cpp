#include <bits/stdc++.h>
using namespace std;
int main(){
   int N; cin >> N;
   int a[N];
   for(int i=0; i<N; i++) cin >> a[i];
   for(int i=1; i<N; i++){
      int check=0;
      for(int j=0; j<N-1; j++){
         if(a[j]>a[j+1]){ swap(a[j],a[j+1]);
            check=1;
      }
      }
      if(check==0) break;
      else{
         cout << "Buoc "<< i <<": ";
         for(int k=0; k<N; k++) cout << a[k]<<" ";
         cout << endl;
      }
   }
}
