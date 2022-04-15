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

void solve() {
	ll n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	vll a(m);
	vll ans(26, 0);
	for (ll i = 0; i < m; i++){cin >> a[i];}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	ll nc = 1;
	vll times(n, 0);
	for (ll i = 0; i < m; i++) {
		ll num = a[i] - 1;
		if (i != 0 && a[i] == a[i - 1]) { times[num] += 1; }
		else{ times[num] += nc;}
		nc++;
	}
	ll last = 0;
	for (ll i = s.size() - 1; i > -1; i--) {
		if (times[i] == 0) { ans[s[i] - 97] += 1 + last; }
		else { last = times[i]; ans[s[i] - 97] += 1 + last; }
	}
	for (ll i = 0; i < 26; i++) {
		cout << ans[i] << " ";
	}
	return;
}

int main() {
	FAST;
	tc;
}
	
