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
#include <list>
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
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	


int main() {
	FAST;
	ll n, k;
	cin >> n >> k;
	ll m = k;
	if (n % 2 == 0 && n / 2 * n < k) { cout << "NO\n"; return 0; }
	if(n % 2 == 1 && n / 2 * n + (n / 2 + 1) < k) { cout << "NO\n"; return 0; }
	cout << "YES\n"; 
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if ((j % 2 == 0 && k != 0 && i % 2 == 0) || (j % 2 == 1 && k != 0 && i % 2 == 1)) { cout << "L"; k--; }
			else { cout << "S"; }
		}
		cout << "\n";
	}
}
	
