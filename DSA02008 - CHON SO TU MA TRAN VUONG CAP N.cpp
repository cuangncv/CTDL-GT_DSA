#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1);
    vector<vector<int>>key;
    for(int i=1;i<=n;i++) a[i]=i;
    int b[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>b[i][j];
    }
    while(1){
        int x=0;
        for(int i=1;i<=n;i++) x+=b[i][a[i]];
        if(x==k) key.push_back(a);
        int check=0;
        for(int i=n-1;i>=1;i--){
            if(a[i]<a[i+1]){
                check=1;
                sort(a.begin()+i+1,a.end());
                for(int j=i+1;j<=n;j++){
                    if(a[j]>a[i]){
                        swap(a[i],a[j]);
                        break;
                    }
                }
                break;
            }
        }
        if(!check) break;
    }
    cout<< key.size()<<endl;
    for(int i=0;i<key.size();i++){
        for(int j=1;j<=n;j++) cout<<key[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
