#include <bits/stdc++.h>
using namespace std;

int arr[55];
void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++) {
      cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i = 0; i <= n/2+1; i ++) {
      if(arr[n-1-i] - arr[i] > 0) {
        ans += arr[n-1-i] - arr[i];
      }
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