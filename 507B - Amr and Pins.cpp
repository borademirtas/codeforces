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
	ll r, x1, y1, x2, y2, ans = 0;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	r *= 2;
	ll dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double place = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
	double place1 = dist * 1.0;
	bool ok = true;
	if (place != place1) { ok = false; }
	if (dist % r == 0 && ok == true) { ans = dist / r; }
	else { ans = dist / r + 1; }
	cout << ans;
}
