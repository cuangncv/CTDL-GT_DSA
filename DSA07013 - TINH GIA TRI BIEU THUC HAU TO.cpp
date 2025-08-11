#include<bits/stdc++.h>
using namespace std;
int tinhtoan(int a,int b,char x){
    if(x=='+') return a+b;
    if(x=='-') return a-b;
    if(x=='*') return a*b;
    else return a/b;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) st.push(s[i]-'0');
            else{
                int p=st.top(); st.pop();
                int q=st.top(); st.pop();
                int key = tinhtoan(q ,p ,s[i]);
                st.push(key);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
