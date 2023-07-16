#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int t;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    ll ans = 0;
    while(n >= 1) {
      ans += n;
      n /= 2;
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