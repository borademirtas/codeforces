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


int main() {
	FAST;
	ll n, s = 0, m = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	map<ll, ll> b;
	map<ll, ll> c;
	for (ll i = 0; i < n; i++) {
		b[s2[i] - 48]++;
	}
	c = b;
	for (ll i = 0; i < n; i++) {
		ll num = s1[i] - 48;
		bool found = false;
		found = false;
		for (ll j = num + 1; j < 10; j++) {
			if (b[j] > 0) { b[j]--; found = true; break; }
		}
		if (found == true) { m++; }
		
	}
	for (ll i = 0; i < n; i++) {
		ll num = s1[i] - 48;
		bool found = false;
		found = false;
		for (ll j = num; j < 10; j++) {
			if (c[j] > 0) { c[j]--; found = true; break; }
		}
		if (found == false) { s++; }
	}
	cout << s << "\n" << m;
}
