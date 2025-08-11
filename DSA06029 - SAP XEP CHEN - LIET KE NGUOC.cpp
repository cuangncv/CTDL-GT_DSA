#include <bits/stdc++.h>
using namespace std;
int main(){
    int s; cin >> s;
    int a[s];
    vector<int>b(0);
    vector<vector<int>>ss;
    for(int i=0;i<s;i++){
        cin >> a[i];
        int x = a[i];
        b.push_back(x);
        sort(b.begin(), b.end());
        ss.push_back(b);  
    }
    for(int i = s - 1; i >= 0; i--){     
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < ss[i].size(); j++){
        	cout << ss[i][j] << " ";
        }
        cout << endl;
    }
}
