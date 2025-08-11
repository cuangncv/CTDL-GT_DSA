#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n;
        cin >> m >> n;
		int M[500][500];
		for (int i=0;i<m;i++){
        for (int j=0;j<n;j++) cin >> M[i][j];
        }
		for (int i=1;i<m;i++) {
			for (int j=0;j<n;j++) {
				if (M[i][j]==1) M[i][j] += M[i - 1][j];
			}
		}
		int key= 0;
		for (int i=0;i<m;i++) {
			for (int j=0;j<n;j++) {
				int check = M[i][j];
				for (int k=j;k>=0;k--) {
					if(M[i][k]!=0) {
						if (check>M[i][k]) check=M[i][k];
						key = max(key, check * (j - k + 1));
					}
					else break;
				}
			}

		}
		cout << key << endl;
	}
    return 0;
}
