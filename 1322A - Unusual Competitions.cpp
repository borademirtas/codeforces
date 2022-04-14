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
	ll n, bal = 0, total = 0;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '(') {bal++; }
		else {bal--; }
		if (bal < 0 || (bal == 0 && s[i] == '(')) { total++; }
	}
	if (bal != 0) { cout << -1; return 0; }
	else { cout << total; }
}
