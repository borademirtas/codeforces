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
	ll n, total = 0;
	cin >> n;
	vll a(n);
	vll b(n);
	map<ll, ll> c;
	map<ll, ll> d;
	map <pair<ll, ll>, ll> m;
	for (ll i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		c[a[i]]++;
		d[b[i]]++;
		m[make_pair(a[i], b[i])]++;
		if (m[make_pair(a[i], b[i])] > 1) { total -= m[make_pair(a[i], b[i])] - 1; }
		if (c[a[i]] > 1) { total += c[a[i]] - 1;}
		if (d[b[i]] > 1) { total += d[b[i]] - 1;}
	}
	cout << total;
	
}
