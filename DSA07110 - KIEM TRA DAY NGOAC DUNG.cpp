#include <bits/stdc++.h>
using namespace std;
string quang(string s) {
    stack<char> st;
    for(char x : s) {
        switch (x){
            case ')':
                if(st.empty() || st.top() != '(') return "NO";
                else st.pop();
                break;
            case ']':
                if(st.empty() || st.top() != '[') return "NO";
                else st.pop();
                break; 
            case '}':
                if(st.empty() || st.top() != '{') return "NO";
                else st.pop();
                break;  
            default:
                st.push(x);                       
        }
    }
    return "YES";   
}
int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << quang(s) << endl;
    }
	return 0;
}
