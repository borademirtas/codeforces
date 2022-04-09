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
	ll n, total = 0, count = 0;
	cin >> n;
	vfast;
	vector<bool> b(n, 0);
	while (total != n) {
		for (ll i = 0; i < n; i++) {
			if (a[i] <= total && b[i] == false) { b[i] = true; total++; if (total == n) { cout << count; return 0; } }
		}
		count++;
		for (ll i = n-1; i >= 0; i--) {
			if (a[i] <= total && b[i] == false) { b[i] = true; total++; if (total == n) { cout << count; return 0; }}
		}
		count++;
	}
	cout << count;
}
