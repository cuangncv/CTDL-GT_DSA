#include <bits/stdc++.h>
using  namespace std;
void thapHN(int n, char a, char b, char c){
    if(n == 1){
        cout << a << " -> "<< c <<endl;
    }
    else{
    	thapHN(n - 1, a, c, b);
    	cout << a <<" -> "<< c << endl;
    	thapHN(n - 1, b, a, c);
    }
}
int main(){
    int n ; cin >> n;
    thapHN(n, 'A', 'B', 'C');
}


