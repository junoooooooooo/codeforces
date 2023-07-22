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
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b >= 10 || a + c >= 10 || b + c >= 10) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}

// ************************************

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}