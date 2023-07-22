#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define X first
#define Y second

void solve() {

	int t;
	cin >> t;
	while(t--) {
		ll n, c;
		cin >> n >> c;
		vector<ll> v(n+1);

		for(int i = 0; i < n; i ++) {
			cin >> v[i];	
		}
		ll st = 0, en = sqrt(c)+1;
		ll w;
		while(st <= en) {
			w = (st+en) / 2;
			unsigned ll sum = 0;
			for(int i = 0; i < n; i ++) {
				sum += 1ll * (1ll * v[i] + w) * (1ll * v[i]+ w);
				if(sum > c) {
					break;
				}
			}
			if(sum < c) {
				st = w+1;
			}
			else if(sum > c) {
				en = w-1;
			}
			else break;
		}
		cout << w/2 << '\n';
 	}
	
}

// ************************************

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}