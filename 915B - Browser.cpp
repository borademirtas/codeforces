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
using namespace std;
#define ll long long 
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;


int main() {
	FAST;
	ll n, pos, l, r, total = 0, np;
	cin >> n >> pos >> l >> r;
	if (pos <= l) {
		if (l != 1) { total += abs(pos - l) + 1; np = l; }
		else { np = pos; }
		if (r != n) { total += r - np + 1; }
	}
	if (pos >= r && pos != l) {
		if (r != n) { total += pos - r + 1; np = r; }
		else { np = pos; }
		if (l != 1) { total += np - l + 1; }
	}
	if (pos > l && pos < r) {
		if (pos - l <= r - pos && l != 1 && r != n) {
			if (l != 1) { total += abs(pos - l) + 1; np = l; }
			else { np = pos; }
			if (r != n) { total += r - np + 1; }
		}
		if (pos - l > r - pos && r != n && l != 1) {
			if (r != n) { total += r - pos + 1; np = r; }
			else { np = pos; }
			if (l != 1) { total += np - l + 1; }
		}
		if (l == 1 && r != n) { total += abs(r - pos) + 1; }
		if (l != 1 && r == n) { total += abs(l - pos) + 1; }
	}
	cout << total;
}
	
