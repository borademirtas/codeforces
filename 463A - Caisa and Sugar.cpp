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
	ll n, s, total = -1;
	cin >> n >> s;
	vll a(n);
	vll b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] <= s && b[i] == 0) { total = max(total, total - total); continue; }
		if (a[i] < s) { total = max(total, 100 - b[i]); }
		
	}
	cout << total;
}
