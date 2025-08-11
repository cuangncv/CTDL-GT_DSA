#include<bits/stdc++.h>
using namespace std;
int n;
int key,check;
long long s;
long long t[31];
void quang(int i,long long sum,int h){
    if(sum==s){
       key=min(key,h);
       check=1;
       return;
    }
    if(sum>s) return;
    if(i!=n-1){
    for(int j=i+1;j<n;j++){
        quang(j,sum+t[j],h+1);
    }
    }
}
int main(){
    cin >> n >> s;
    key=n; check=0;
    for(int i=0;i<n;i++) cin >> t[i];
    for(int i=0;i<n;i++){
      quang(i,t[i],1);
    }
    if(!check) cout << "-1";
    else cout << key;
}
