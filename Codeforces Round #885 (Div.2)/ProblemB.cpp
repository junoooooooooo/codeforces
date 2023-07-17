#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> b[k+1];
    for(int i = 1; i <= k; i ++) b[i].push_back(0);
    for(int i = 1; i <= n; i ++) {
      int t;
      cin >> t;
      b[t].push_back(i);
    } 
    for(int i = 1; i <= k; i ++) b[i].push_back(n+1);
    int ans = 200005;
    vector<int> v[k+1];
    for(int i = 1; i <= k; i ++) {
      for(int j = 0; j < b[i].size()-1; j ++) {
        v[i].push_back(b[i][j+1] - b[i][j] - 1);
      }
    }
    for(int i = 1; i <= k; i ++) {
      sort(v[i].rbegin(), v[i].rend());
      v[i][0] = v[i][0]/2;
      int tmp = max(v[i][0], v[i][1]);
      //cout << i <<':'<<tmp << ' ';
      //if(tmp == 1) tmp = 0;
      ans = min(ans, tmp);
    }
    cout << ans << '\n';
  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}