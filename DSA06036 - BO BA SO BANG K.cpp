 #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   void quang(int n,ll k, ll a[]){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
           if(binary_search(a+j+1,a+n,k-a[i]-a[j])){
            cout << "YES"<<endl;
            return;
           }
         }
        }
        cout <<"NO"<<endl;
        return;
   }
   int main(){
      int t; cin >> t;
      while(t--){
        int n; cin >> n;
        ll k,a[n];
        cin >> k;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        quang(n,k,a);
      }
      return 0;
   }
