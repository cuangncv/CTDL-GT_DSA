#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n; cin >> n;
      int a[n];
      int var=0;
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n-1;i++){
         int q=i;
         for(int j=i+1;j<n;j++){
            if(a[q]>a[j]){
               q=j;
            }
         }
         if(q!=i){
            swap(a[i],a[q]);
            var++;
         }
      } cout << var << endl;
   }
   return 0;
}
