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
	ll n, total = 0, low = 999999999999999999;
	cin >> n;
	vll a(n); 
	map<ll, ll> b;
	for (ll i = 0; i < n; i++) { 
		cin >> a[i]; b[a[i]]++; 
		if (a[i] == 8) {
			if (b[8] > b[4]) { b[8]--; total++; }
		}
		if (a[i] == 15) {
			if (b[15] > b[8]) { b[15]--; total++; }
		}
		if (a[i] == 16) {
			if (b[16] > b[15]) { b[16]--; total++; }
		}
		if (a[i] == 23) {
			if (b[23] > b[16]) { b[23]--; total++; }
		}
		if (a[i] == 42) {
			if (b[42] > b[23]) { b[42]--; total++; }
		}
	}
	n -= total;
	low = min(low, b[4]);
	low = min(low, b[8]);
	low = min(low, b[15]);
	low = min(low, b[16]);
	low = min(low, b[23]);
	low = min(low, b[42]);
	total += n - low * 6;
	cout << total;
}
	
