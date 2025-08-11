#include<bits/stdc++.h>
using namespace std;
int cheo1[100],cheo2[100],ngang[100],doc[100],tong,a[10][10];
void quang(int i,int sum){
	for(int j=1;j<=8;j++){
		if(!ngang[j] && !doc[j] && !cheo1[i+j] && !cheo2[i-j+8]){
			ngang[j]=doc[j]=cheo1[i+j]=cheo2[i-j+8]=1;
			if(i==8) tong=max(tong,sum+a[i][j]);
			else quang(i+1,sum+a[i][j]);
			ngang[j]=doc[j]=cheo1[i+j]=cheo2[i-j+8]=0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++) cin >> a[i][j];
		}
		tong=0;
		quang(1,0);
		cout << tong << endl;
	}
	return 0;
}
