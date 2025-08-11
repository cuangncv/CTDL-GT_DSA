#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n;
    cin >> n ;
    int a[n];
    int key=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
       int quang=i,check=0;
       while(a[quang]<a[quang+1] && quang <n-1){
          quang ++; 
       }     
       while(a[quang]>a[quang+1] && quang < n-1  ){
          quang++;
       }
       key=max(key,quang-i+1);
    } 
    cout << key << endl; 
  } 
}
