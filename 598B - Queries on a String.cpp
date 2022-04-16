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
	string s;
	ll m;
	cin >> s >> m;
	for (ll i = 0; i < m; i++) {
		ll l, r, k;
		cin >> l >> r >> k;
		vector <char> a;
		for (ll j = l - 1; j < r; j++) {
			a.push_back(s[j]);
		}
		for (ll j = 0; j < a.size(); j++) {
			ll num = (l - 1) + (j + k) % (r - l + 1);
			s[num] = a[j];
		}
		a.clear();
	}
	cout << s;
}
	
