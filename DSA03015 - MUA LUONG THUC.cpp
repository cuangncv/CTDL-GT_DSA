#include<bits/stdc++.h>
using namespace std;
int main(){
   	int T;
   	cin >> T;
   	while(T--){
      	int n, s, m;
      	cin >> n >> s >> m;
        if(n * (s - (s / 7)) < m*s){
            cout << "-1" <<endl;
        }
        else{
         	int x = 1;
         	while(x * n < s * m){
            	x++;
         	}
         	cout << x <<endl;
      	}
    }
}
