#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	


int main() {
	FAST;
	ll n, m, q, top = 0, streak = 0, best = 0;
	cin >> n >> m >> q;
	vector<vector<ll>> a(n, vector<ll>(m));
	vll b(n);
	for (ll i = 0; i < n; i++) {
		streak = 0;
		top = 0;
		for (ll j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1) { streak++; }
			else { streak = 0; }
			top = max(streak, top);
		}
		b[i] = top;
	}
	for (ll i = 0; i < q; i++) {
		best = 0;
		ll x, y;
		cin >> x >> y;
		x--; y--;
		a[x][y] = abs(a[x][y] - 1);
		streak = 0;
		top = 0;
		for (ll j = 0; j < m; j++) {
			if (a[x][j] == 1) { streak++; }
			else { streak = 0; }
			top = max(streak, top);
		}
		b[x] = top;
		for (ll t = 0; t < b.size(); t++) { best = max(best, b[t]); }
		cout << best << "\n";
	}
}
