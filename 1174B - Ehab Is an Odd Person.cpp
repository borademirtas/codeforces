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


int main() {
	FAST;
	ll n;
	bool o = false, e = false;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (a[i] % 2 == 0) { e = true; } if (a[i] % 2 == 1) { o = true; }}
	if (o == true && e == true) { sort(a.begin(), a.end()); }
	for (ll i = 0; i < a.size(); i++) { cout << a[i] << " "; }
	return 0;
}
