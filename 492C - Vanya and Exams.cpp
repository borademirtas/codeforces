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
	ll n, r, avg, total = 0, num, ans = 0;
	cin >> n >> r >> avg;
	vp a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i].second >> a[i].first; total += a[i].second; }
	num = n * avg;
	if (total >= num) { cout << 0; return 0; }
	sort(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		ll dif = r - a[i].second;
		ans += a[i].first * min(dif, num - total);
		total += min(dif, num - total);
		if (num == total) { break; }
	}
	cout << ans;
}
	
