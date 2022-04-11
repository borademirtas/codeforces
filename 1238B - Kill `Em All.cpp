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

void solve() {
	ll n, r, total = 0;
	cin >> n >> r;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	vll b;
	b.push_back(a[0]);
	for (ll i = 1; i < n; i++) { if (a[i] != a[i - 1]) { b.pb(a[i]); } }
	for (ll i = 0; i < b.size(); i++) {
		if (b[i] - i * r > 0) { total++; }
		else { break; }
	}
	cout << total << "\n"; return;
}

int main() {
	FAST;
	tc;
}
