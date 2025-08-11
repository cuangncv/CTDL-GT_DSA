   #include<bits/stdc++.h>
   using namespace std;
   bool sx(pair<int,int> &a,pair<int,int> &b){
      return a.first < b.first;
   }
   int main(){
      int t; cin >> t;
      while(t--){
         int n; cin >> n;
         int a[n];
         vector<pair<int,int>>quang;
         for(int i=0;i<n;i++){
            cin >> a[i];
            quang.push_back({a[i],i});
         }
         sort(quang.begin(),quang.end(),sx); 
         int key=-1;
         int check=quang[0].second;
         for(int i=1;i<n;i++){
            if(quang[i].second>check){
               key=max(key,quang[i].second-check);
            }
            check=min(check,quang[i].second);
         }
         cout << key << endl;
      }
      return 0;
   }
