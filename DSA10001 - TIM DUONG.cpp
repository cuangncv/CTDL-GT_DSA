#include <bits/stdc++.h>
using namespace std;

const int MAX_ROWS = 501;
const int MAX_COLS = 501;

char grid[MAX_ROWS][MAX_COLS];
int rows, cols;
pair<int, int> start, target;
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };
char direction[4] = { 'B', 'T', 'D', 'N' };
bool visited[MAX_ROWS][MAX_COLS];
bool reachable;
void dfs(int x, int y, int count, char dir) {
    visited[x][y] = true;
    if (x == target.first && y == target.second && count <= 3) {
        reachable = true;
        return;
    }
    if (count > 3 || grid[x][y] == 'T') {
        visited[x][y] = false;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int x1 = x + dx[i], y1 = y + dy[i];
        if (x1 >= 0 && x1 < rows && y1 >= 0 && y1 < cols && grid[x1][y1] != '*' && !visited[x1][y1]) {
            if (direction[i] != dir)  dfs(x1, y1, count + 1, direction[i]);
            else  dfs(x1, y1, count, direction[i]);
        }
    }
    visited[x][y] = false;
}
int main() {
    int t; 
    cin >> t;
    while (t--) {
        cin >> rows >> cols;
        for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') start = { i, j };
            if (grid[i][j] == 'T') target = { i, j };
          }
        }
        reachable = false;
        memset(visited, false, sizeof(visited));
        dfs (start.first, start.second, 0, 'X');
        if(reachable) cout << "YES" << endl;
        else  cout << "NO"  << endl;
    }
    return 0;
}

