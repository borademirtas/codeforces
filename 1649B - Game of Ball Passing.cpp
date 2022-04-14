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

void solve(){
	ll n, top = 0, total = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; total += a[i]; top = max(top, a[i]); }
	if (top * 2 <= total && total != 0) { cout << 1 << "\n"; }
	else { cout << 2 * top - total << "\n"; }
}

int main() {
	FAST;
	tc;
}
