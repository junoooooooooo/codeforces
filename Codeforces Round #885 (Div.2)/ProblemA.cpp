#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int vis[k+1][n+1][m+1];
    for(int i = 0; i <= k; i ++)
      for(int j = 0; j <= n; j ++)
        for(int l = 0; l <= m; l ++)
          vis[i][j][l] = 0;
    bool flag = false;
    vector<pair<int, int>> v;
    for(int i = 0; i < k+1; i ++) {
      int t1, t2;
      cin >> t1 >> t2;
      v.push_back({t1,t2});
    }
    for(int i = 0; i < k+1; i ++) {
      int x, y;
      x = v[i].X;
      y = v[i].Y;
      queue<pair<int, int>> q;
      q.push({x, y});
      vis[i][x][y] = 1;
      while(!q.empty()) {
        auto cur = q.front();
        q.pop();
        if(i != 0 && ((vis[i][cur.X][cur.Y] % 2) == (vis[0][cur.X][cur.Y] % 2))) {
          cout << "NO\n";
          //cout << vis[0][cur.X][cur.Y] << ' ' << cur.X << ' ' << cur.Y << '\n';
          flag = true;
          break;
        }
        for(int j = 0; j < 4; j ++) {
          int nx = cur.X + dx[j];
          int ny = cur.Y + dy[j];
          if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
          if(vis[i][nx][ny] != 0) continue;
          vis[i][nx][ny] = vis[i][cur.X][cur.Y] + 1;
          q.push({nx, ny});
        }
        if(flag) break;
      }
      if(flag) break;
    }
    if(!flag) cout << "YES\n";
  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}