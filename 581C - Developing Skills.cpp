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
	ll n, k, total = 0;
	cin >> n >> k;
	vll a(n);
	vll b;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i] / 10;
		if (a[i] != 100) { b.push_back(a[i] % 10); if (b[b.size() - 1] != 0) { a[i] -= b[b.size() - 1]; a[i] += 10; } }
	}
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	for (ll i = 0; i < b.size(); i++) {
		if (10 - b[i] <= k) { total++; k -= 10 - b[i]; }
	}
	for (ll i = 0; i < a.size(); i++) {
		total += min(k / 10, (100 - a[i]) / 10);
		k -= min(k, 100 - a[i]);
	}
	cout << min(total, n * 10);
}
