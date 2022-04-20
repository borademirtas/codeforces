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
	ll n, ans = 0, total1 = 0, best = 0, total2 = 0;
	string s;
	cin >> n;
	vll a(n);
	vll b(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	cin >> s;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'B') { ans += a[i]; b.push_back(0 - a[i]); }
		else{ b.push_back(a[i]); }
	}
	for (ll i = 0; i < b.size(); i++) {
		total1 += b[i];
		total2 += b[b.size() - 1 - i];
		best = max(best, total1);
		best = max(best, total2);
	}
	cout << ans + best;
}
