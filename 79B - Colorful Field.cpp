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
    ll n, m, k, t;
	cin >> n >> m >> k >> t;
	vp d(k);
	for (ll i = 0; i < k; i++) {
		cin >> d[i].first >> d[i].second;
	}
	for (ll i = 0; i < t; i++) {
		ll a, b;
		cin >> a >> b;
		ll num = (a - 1) * m + b;
		for (ll j = 0; j < k; j++) {
			if (a > d[j].first || (a == d[j].first && b > d[j].second)) { num--; }
			if (a == d[j].first && b == d[j].second) { num = -1; }
		}
		if (num < 0) { cout << "Waste\n"; continue; }
		if (num % 3 == 1) { cout << "Carrots\n"; }
		if (num % 3 == 2) { cout << "Kiwis\n"; }
		if (num % 3 == 0) { cout << "Grapes\n"; }
	}
}
	
	
