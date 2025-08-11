#include <bits/stdc++.h>
using namespace std;
vector<string> a(10);
void quang(int i){
   	if(i == 2 || i == 5){
   		a[i] = '/';
   		quang(i + 1);
   	}
   	else{
   		for(int j = 0;j <= 2;j += 2){
      		a[i]= j + '0';
      		if(i == 9){
         		if((a[0] + a[1]) != "00" && a[3] + a[4] == "02" && a[6] == "2"){
            		for(int h = 0; h <= 9; h++) cout << a[h];
            		cout << endl;
         		}
      		}
      		else quang(i + 1);
   		}
   	}
}
int main(){
   quang(0);
   return 0;
}
