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
	ll n, t = 0, xPos, yPos, hc = 0, vc = 0, dc = 0, total =0;
	bool diag = false;
	cin >> n;
	if (n == 1) { cout << 1; return 0; }
	vector<vector<ll>> a(n, vector<ll>(n));
	for (ll i = 0; i < n; i++) {
		total = 0;
		for (ll j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 0) { xPos = i;  yPos = j; }
			total += a[i][j];
		}
		t = max(total, t);
	}
	for (ll i = 0; i < n; i++) {
		vc += a[xPos][i];
	}
	for (ll i = 0; i < n; i++) {
		hc += a[i][yPos];
	}
	if (yPos == xPos){
		diag = true;
		for (ll i = 0; i < n; i++) {
			dc += a[i][i];
		}
	}
	if (xPos + yPos + 2 == n + 1 && yPos != xPos) {
		diag = true;
		for (ll i = 0; i < n; i++) {
			dc += a[i][n - 1 - i];
		}
	}
	if (t - vc == 0) { cout << -1; return 0; }
	if (diag == false && hc == vc) { a[xPos][yPos] = t - vc;}
	if (hc != vc) { cout << -1; return 0; }
	if (diag == true && hc == vc && dc == hc) { a[xPos][yPos] = t - vc;}
	if (diag == true && (dc != hc || dc != vc)) { cout << -1; return 0;}
	for (ll i = 0; i < n; i++) {
		total = 0;
		for (ll j = 0; j < n; j++) {
			total += a[i][j];
		}
		if (total != t) { cout << -1; return 0; }
	}
	for (ll i = 0; i < n; i++) {
		total = 0;
		for (ll j = 0; j < n; j++) {
			total += a[j][i];
		}
		if (total != t) { cout << -1; return 0; }
	}
	total = 0;
	for (ll i = 0; i < n; i++) {
		total += a[i][i];
	}
	if (total != t) { cout << -1; return 0; }
	total = 0;
	for (ll i = 0; i < n; i++) {
		total += a[i][n - 1 - i];
	}
	if (total != t) { cout << -1; return 0; }
	cout << t - vc; return 0;
}
