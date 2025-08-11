#include<bits/stdc++.h>
using namespace std;
int x,n;
int check=0;
int a[100];
void quang(int c,int i){
    if(c==x){
        check++;
        return;
    }
    for(int j=i+1;j<n;j++){
		if(a[j]>a[i]) quang(c+1,j);
	}
}
int main(){
    cin >> n >> x;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<=n-x;i++){
		quang(1,i);
	}
	cout << check;
}
