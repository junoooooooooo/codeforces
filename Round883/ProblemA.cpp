#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i ++) {
      int a, b;
      cin >> a >> b;
      if(a-b > 0) ans ++;
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