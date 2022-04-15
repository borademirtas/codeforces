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
#define pbb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout

ll series(ll x) {
	return x * (x + 1) / 2;
}

int main() {
	FAST;
	ll m, b, top = 0, mi, mh;
	cin >> m >> b;
	for (ll i = b; i > -1; i--) {
		ll h = m * (b - i);
		top = max(top, (i + 1) * series(h) + (h + 1) * series(i));
	}
	cout << top;
}
	
	
