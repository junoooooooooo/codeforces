#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n+5);
    long long ans = 0;
    int cnt = 0;
    bool flag = false;
    bool isPos = false;
    for(int i = 0; i < n; i ++) {
      cin >> v[i];
      ans += (v[i] < 0)? -v[i] : v[i];
    }
    for(int i = 0; i < n; i ++) {
      if(!flag && v[i] < 0) {
        flag = true;
      }
      if(flag && v[i] > 0) {
        isPos = true;
      }
      if(flag && v[i] <= 0) {
        if(isPos) cnt ++;
        cnt ++;
        flag = false;
        isPos = false;
        //cout << i << ' ' << cnt << '\n';
        if(i >= n) break;
        while(i+1 < n && v[i+1] <= 0) i ++;
        //cout << i << ' ' << v[i+1] << '\n';
      }

    }

    cout << ans << ' ' << cnt << '\n';
  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}