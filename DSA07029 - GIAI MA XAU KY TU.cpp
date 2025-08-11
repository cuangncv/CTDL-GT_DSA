#include <bits/stdc++.h>
using namespace std;
string decodestring(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]==']'){
            string p;
            while (st.size() && st.top() != '[') {
                p = st.top() + p;
                st.pop();
            }
            st.pop();
            string so;
            while(!st.empty() && isdigit(st.top())) {
                so = st.top() + so;
                st.pop();
            }
            int u = 1;
            if (!so.empty()) u = stoi(so);
            string ss;
            for (int j=0;j<u;j++) ss += p;
            for (int j=0;j<ss.size();j++) st.push(ss[j]);
        } else  st.push(s[i]);
    }
    string key;
    while (!st.empty()) {
        key = st.top() + key;
        st.pop();
    }
    return key;
}
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << decodestring(s) << endl;
    }
    return 0;
}

