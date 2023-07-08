#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n, d;
    double h;
    cin >> n >> d >> h;
    vector<int> cord;
    for(int i = 0; i < n; i ++) {
      int t;
      cin >> t;
      cord.push_back(t);
    }
    sort(cord.rbegin(), cord.rend());
    double ans = 0;
    ans += d * h * 0.5;
    //cout << d*h * 0.5  << ' ';
    for(int i = 1; i < n; i ++) {
      double tmp = 0;
      if(cord[i] + h - cord[i-1] > 0) tmp = cord[i] + h - cord[i-1];
      ans += (double)d*h*0.5 - (double)(d*h*0.5 * pow(tmp,2)/pow(h,2)) ;
      //cout << d*h*0.5 * pow(tmp,2)/pow(h,2) << '\n';
    }
    cout << ans << '\n';
  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.precision(10);
  solve();
}