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
	ll n, m, total = 0, ans;
	cin >> n >> m;
	vector<string> a(n);
	vll b(n);
	vll c(m);
	for (ll i = 0; i < n; i++) {
		ll ha = 0;
		cin >> a[i];
		for (ll j = 0; j < m; j++) {
			if (a[i][j] == '*') { total++; ha++; }
		}
		b[i] = ha;
	}
	for (ll i = 0; i < m; i++) {
		ll va = 0;
		for (ll j = 0; j < n; j++) {
			if (a[j][i] == '*') { va++; }
		}
		c[i] = va;
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			ans = b[i] + c[j];
			if (a[i][j] == '*') { ans--; }
			if (ans == total) { cout << "YES\n" << i + 1<< " " << j + 1; return 0; }
		}
	}
	cout << "NO\n";
}
