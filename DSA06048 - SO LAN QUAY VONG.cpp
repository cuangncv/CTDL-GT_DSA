#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
      long long n;
      cin >> n;
      long long a[n];
      for(int i=0;i<n;i++){
         cin >> a[i];
      }
      int check=0;
      for(int i=0;i<n;i++){
         if(a[i]>a[i+1]){
            cout << i+1 << endl;
            check=1;
            break;
         }
      }
      if(!check){
         cout << "0" << endl;
      }
      }
      return 0;
   }
