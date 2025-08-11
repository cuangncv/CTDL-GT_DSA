#include<bits/stdc++.h>
using namespace std;
int check(char r){
    if(r=='^') return 3;
    if(r=='*' || r=='/') return 2;
    if(r=='+' || r=='-') return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string st="";
        stack<char>pq;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) st+=s[i];
            else {
                if(s[i]=='(') pq.push(s[i]);
                else{ if(s[i]==')'){
                    while(pq.size() && pq.top()!='('){
                        char q=pq.top(); pq.pop();
                        st+=q;
                    } pq.pop();
                }
                else{
                    while(pq.size() && check(pq.top())>=check(s[i])){
                        char q=pq.top(); pq.pop();
                        st+=q;
                    } pq.push(s[i]);
                }
                }
            }
        }
        while(!pq.empty()){
            if(pq.top()!='('){
            char q = pq.top(); pq.pop();
            st+=q;
            }
        } 
        cout << st<< endl;
    }
    return 0;
}
