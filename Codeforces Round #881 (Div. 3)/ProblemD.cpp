#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define X first
#define Y second

vector<int> adj[200005];
int dp[200005];
void dfs(int cur, int par) {
  if(par != 0 && adj[cur].size() == 1) {
    dp[cur] = 1;
    return;
  }
  for(int nxt : adj[cur]) {
    if(nxt == par) continue;
    dfs(nxt, cur);
    dp[cur] += dp[nxt];
  }
}

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++){ 
      adj[i].clear();
      dp[i] = 0;
    }
    for(int i = 0; i < n-1; i ++) {
      int t1, t2;
      cin >> t1 >> t2;
      adj[t1].pb(t2);
      adj[t2].pb(t1);
    }
    dfs(1, 0);
    int m;
    cin >> m;
    for(int i = 0; i < m; i ++) {
      int t1, t2;
      cin >> t1 >> t2;
      cout << 1ll * dp[t1] * dp[t2] << '\n';
    }
  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}