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


int main() {
	FAST;
	ll n, top = 0;
	cin >> n;
	vfast;
	map <ll, ll> b;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (i != j) { b[a[i] + a[j]]++; top = max(top, b[a[i] + a[j]]); }
		}
	}
	cout << top / 2; 
}
