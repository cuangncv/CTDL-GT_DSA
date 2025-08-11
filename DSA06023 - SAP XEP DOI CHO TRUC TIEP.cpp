#include <bits/stdc++.h>
using namespace std;
int main(){
   int N; cin >> N;
   int a[N];
   for(int i=0;i<N;i++) cin >> a[i];
   for(int i=0;i<N-1;i++){
      for(int j=i+1;j<N;j++){
         if(a[i]>a[j]) swap(a[i],a[j]);
      } cout << "Buoc "<< i+1<<": ";
      for(int k=0;k<N;k++) cout << a[k]<<" ";
      cout << endl;
   }
}
