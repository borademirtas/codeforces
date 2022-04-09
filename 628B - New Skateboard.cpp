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
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;


int main() {
	FAST;
	ll total = 0;
	string s;
	cin >> s;
	if ((s[0] - 48) % 4 == 0) { total++; }
	for (ll i = 1; i < s.size(); i++) {
		if ((s[i] - 48) % 4 == 0) { total++; }
		ll num = (s[i] - 48) + 10 * (s[i - 1] - 48);
		if (num % 4 == 0) { total += i; }
	}
	cout << total;
}
