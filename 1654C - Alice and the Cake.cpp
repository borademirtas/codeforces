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

void solve() {
	ll n, total = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i];  total += a[i]; }
	multiset<ll> p = {total};
	multiset<ll> q(a.begin(), a.end());
	while (!p.empty()) {
		ll x = *--p.end();
		if (x < *--q.end()) break;
		p.erase(--p.end());
		if (q.find(x) != q.end()){q.erase(q.find(x));}
		else {
			p.insert(x / 2);
			p.insert((x + 1) / 2);
		}
	}
	cout << (q.empty() ? "YES" : "NO") << "\n";
}

int main() {
	FAST;
	tc;
}
