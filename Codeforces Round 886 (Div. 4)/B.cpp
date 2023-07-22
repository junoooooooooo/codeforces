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
		int n;
		cin >> n;
		vector<int> v;
		int ans = 0, mx = 0;
		for(int i = 1; i <= n; i ++) {
			int a, b;
			cin >> a >> b;
			if(a <= 10) {
				if(mx < b) {
					ans = i;
					mx = b;
				}
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