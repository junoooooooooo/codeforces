#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define X first
#define Y second

void solve() {
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		ll a[n+1];
		for(int i = 0; i < n; i ++) {
			cin >> a[i];
		}
		if(n == 1) {
			cout << 0 << '\n';
			continue;
		}
		sort(a, a+n);
		int cnt = 0;
		int mx = 0;
		ll m;
		for(int i = 1; i < n; i ++) {
			m = abs(a[i] - a[i-1]);
			if(m <= k) {
				cnt ++;
			}
			if(m > k) {
				mx = max(mx, cnt+1);
				//i ++;
				cnt = 0;
			}
		}
		mx = max(mx, cnt+1);
		cout << n - mx << '\n';
	}
	
}

// ************************************

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}