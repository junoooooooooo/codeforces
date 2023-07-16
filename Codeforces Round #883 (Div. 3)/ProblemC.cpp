#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

bool cmp(pair<int, ll> a, pair<int, ll> b) {
  if(a.X != b.X) return a.X > b.X;
  return a.Y < b.Y;
}

void solve() {
  int t;
  cin >> t;
  while(t--) {
    int n, m, h;
    cin >> n >> m >> h;
    long long my_pt, my_pl;
    vector<pair<int, long long>> pv;
    for(int i = 0; i < n; i ++) {
      long long pnt = 0, plt = 0;
      multiset<long long> ms;
      for(int i = 0; i < m; i ++) {
        int t;
        cin >> t;
        ms.insert(t);
      }
      int hs = 0;
      for(auto e : ms) {
        hs += e;
        if(hs > h) break;
        pnt += 1;
        plt += 1ll * hs;
      }
      pv.push_back({pnt, plt});
      if(i == 0) {
        my_pt = pnt;
        my_pl = plt;
      }
    }

    sort(pv.begin(), pv.end(), cmp);
    for(int i = 0; i < pv.size(); i ++) {
      if(pv[i].X == my_pt && pv[i].Y == my_pl) {
        cout << i + 1 << '\n';
        break;
      }
//      cout << pv[i].X << ' ' << pv[i].Y << '\n';
    }

  }
}

// ************************************

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}