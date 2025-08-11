#include <bits/stdc++.h>
using namespace std;
int main(){
   	int s;
	cin >> s;
    vector<int>a(s);
    vector<vector<int>> ss;
    for(int i = 0; i < s; i++){
        cin >> a[i];
    }
    for(int i = 0; i < s - 1; i++){
        int x = a[i];
        int k = i;
        for(int j= i + 1; j < s; j++){
         	if(x > a[j]){
          		x = a[j];
          		k = j;
         	}
        }
		swap(a[i], a[k]);
        ss.push_back(a);
    }
    for(int i = ss.size() - 1; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
         for(int j = 0; j < ss[i].size(); j++){
            cout << ss[i][j] << " ";
        }
        cout << endl;
    }
}

