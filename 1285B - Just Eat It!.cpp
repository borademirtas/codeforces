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
#define pbb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;

void solve() {
	ll n, total = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	for (ll i = 0; i < n; i++) {
		total += a[i];
		if (total <= 0) { cout << "NO\n"; return; }
	}
	total = 0;
	for (ll i = n-1; i >= 0; i--) {
		total += a[i];
		if (total <= 0) { cout << "NO\n"; return; }
	}
	cout << "YES\n"; return;
}

int main() {
	FAST;
	tc;
}
