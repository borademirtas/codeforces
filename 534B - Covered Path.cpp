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
	ll v1, v2, t, d, total = 0;
	cin >> v1 >> v2 >> t >> d;
	total += v1 + v2;
	ll pos = v1;
	for (ll i = 0; i < t - 2; i++) {
		ll top = (t - 2 - i) * d + v2;
		pos = min(pos + d, top);
		total += pos;
	}
	cout << total;
}
	
	
