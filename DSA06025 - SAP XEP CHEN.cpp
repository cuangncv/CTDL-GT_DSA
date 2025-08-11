#include <bits/stdc++.h>
using namespace std;
int main(){
   int N; cin >> N;
   int a[N];
   for(int i=0;i<N;i++) cin >> a[i];
   for(int i=0;i<N;i++){
      cout << "Buoc "<<i<<": ";
      sort(a,a+1+i);
      for(int k=0;k<=i;k++) cout << a[k]<<" ";
      cout << endl;
   }
}
