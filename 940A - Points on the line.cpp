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
#define cout std::cout


int main() {
	FAST;
	ll n, m, total = 9999;
	cin >> n >> m;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		for (ll j = i; j < n; j++) {
			if (a[j] - a[i] <= m) { total = min(total, n - (j - i + 1)); }
		}
	}
	cout << total;
}
	
