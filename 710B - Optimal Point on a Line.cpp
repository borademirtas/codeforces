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
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	ll n, total = 0, top = 0, ans = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		total += a[i] - a[0];
	}
	top = total;
	for (ll i = 1; i < n; i++) {
		ll dif = a[i] - a[i-1];
		total += (i * dif * -1) + (n - i) * dif;
		top = max(top, total);
		
	}
	total = 0;
	for (ll i = 0; i < n; i++) {
		total += a[i] - a[0];
	}
	if (total == top) { cout << a[0]; return 0; }
	for (ll i = 1; i < n; i++) {
		ll dif = a[i] - a[i - 1];
		total += (i * dif * -1) + (n - i) * dif;
		if (total == top) { cout << a[i]; return 0; }
	}
}
	
	
