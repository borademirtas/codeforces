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
#include <deque>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	ll n, total = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	ll x, f;
	cin >> x >> f;
	ll num = x + f;
	for (ll i = 0; i < n; i++) { a[i] -= x; a[i] = max(x - x, a[i]); }
	for (ll i = 0; i < n; i++) { if (a[i] % num == 0) { total += a[i] / num; } else { total += a[i] / num + 1; } }
	total *= f;
	cout << total;
}
	
