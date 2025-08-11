#include<bits/stdc++.h>
using namespace std;
int n, k, s, key;
void quang(int sl, int i,int sum){
  if(sum > s || sl > k) return;
  if(sum == s && sl == k) key++;
  if(sum < s && sl < k) {
    for(int j = i + 1; j <= n; j++) quang(sl + 1, j, sum + j);
  }
}
int main(){
  while(cin >> n >> k >> s){
  	key=0;
    if(n == 0 && k == 0 && s == 0) break;
    for(int i = 1; i <= n; i++){
       quang(1, i, i);
    }
    cout << key << endl;
  }
  return 0;
}
