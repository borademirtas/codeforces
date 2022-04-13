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
	ll n, total = 0;
	cin >> n;
	vll a(n); 
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	vector<bool> used(n, 0);
	for (ll i = 0; i < n; i++) {
		bool found = false;
		for (ll j = i + 1; j < n; j++) {
			if (a[i] < a[j] && used[j] == false) { used[j] = true; found = true; break; }
		}
		if (found == false) { total++; }
	}
	cout << total;
}
