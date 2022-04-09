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
	ll n, m, j = 1;
	cin >> n >> m;
	vll a(n);
	vll ans;
	mpll;
	for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++; }
	while (m != 0) {
		if (b[j] < 1 && m - j >= 0) { ans.push_back(j); m -= j; }
		if (m - j < 0) { break; }
		j++;
	}
	cout << ans.size() << "\n";
	for (ll i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	
}
