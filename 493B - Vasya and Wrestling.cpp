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
	vll b, c;
	ll n, ac = 0, bc = 0, num = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0) { ac += a[i]; b.push_back(a[i]); }
		else { bc -= a[i]; c.push_back(0 - a[i]); }
	}
	if (ac > bc) { cout << "first"; return 0; }
	if (ac < bc) { cout << "second"; return 0; }
	for (ll i = 0; i < min(c.size(), b.size()); i++) {
		if(c[i] > b[i]) { cout << "second"; return 0; }
		if(c[i] < b[i]) { cout << "first"; return 0; }
	}
	if (b.size() > c.size()) { cout << "first"; return 0; }
	if (b.size() < c.size()) { cout << "second"; return 0; }
	if(a[n-1] > 0) { cout << "first"; return 0; }
	if (a[n - 1] < 0) { cout << "second"; return 0; }
}
