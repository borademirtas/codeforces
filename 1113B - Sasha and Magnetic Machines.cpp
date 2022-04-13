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


int main() {
	FAST;
	ll n, best = 0, total = 0, num;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; total += a[i]; }
	sort(a.begin(), a.end());
	ll low = a[0];
	for (ll i = 1; i < n; i++) {
		for (ll j = 2; j <= 100; j++) {
			if (a[i] % j == 0) { num = a[i] - (a[i] / j); num -= a[0] * j - a[0]; best = max(best, num); }
		}
	}
	cout << total - best;
}
	
