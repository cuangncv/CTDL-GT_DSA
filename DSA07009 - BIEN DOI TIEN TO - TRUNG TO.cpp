#include<bits/stdc++.h>
using namespace std;
int check(char x){
    if(x=='+' || x== '-'||x=='*'||x=='/') return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string>st;
        for(int i=s.size()-1;i>=0;i--){
            if(!check(s[i])) st.push(string(1,s[i]));
            else{
                string p=st.top(); st.pop();
                string q=st.top(); st.pop();
                string key="("+p+s[i]+q+")";
                st.push(key);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
