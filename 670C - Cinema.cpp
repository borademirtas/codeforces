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


int main() {
	FAST;
	ll n;
	cin >> n;
	map<ll, ll> d;
	map<ll, ll> p;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; d[a[i]]++; }
	ll m;
	cin >> m;
	ll top1 = 0;
	ll top2 = 0;
	ll ans;
	vll pos;
	vll newpos;
	vll b(m); for (ll i = 0; i < m; i++) { cin >> b[i]; if (d[b[i]] > top1) { top1 = d[b[i]]; } }
	vll c(m); for (ll i = 0; i < m; i++) { cin >> c[i];} 
	for (ll i = 0; i < m; i++) { if (top1 == d[b[i]]) { top2 = max(top2, d[c[i]]); if (top2 == d[c[i]]) { ans = i + 1; } } }
	cout << ans;
}
