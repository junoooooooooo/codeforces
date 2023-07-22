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
		string ans;
		for(int i = 0; i < 8; i ++) {
			for(int j = 0; j < 8; j ++) {
				char tmp;
				cin >> tmp;
				if(tmp != '.') ans += tmp;
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