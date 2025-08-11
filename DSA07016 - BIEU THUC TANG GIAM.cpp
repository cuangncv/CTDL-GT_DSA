#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >> t;
	while(t--){
		string S;
		cin >> S;
		stack<int>st;
		for(int i=0;i<=S.size();i++){
			if(S[i]=='D') st.push(i+1);
			else{
				cout << i+1;
				while(st.size()){
					int x=st.top();
					st.pop();
					cout << x;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
