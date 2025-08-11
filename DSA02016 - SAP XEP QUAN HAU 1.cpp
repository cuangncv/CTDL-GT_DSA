#include <bits/stdc++.h>
using namespace std;
int hang[100],cot[100],cheo1[100],cheo2[100],n,key;
void quang(int i){
	for(int j=1;j<=n;j++){
		if(!hang[j] && !cot[j] && !cheo1[i+j] && !cheo2[i-j+n]){
			hang[j]=cot[j]=cheo1[i+j]=cheo2[i-j+n]=1;
			if(i==n) key++;
			else quang(i+1);
			hang[j]=cot[j]=cheo1[i+j]=cheo2[i-j+n]=0;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		key=0;
		quang(1);
		cout << key << endl;
	}
}
