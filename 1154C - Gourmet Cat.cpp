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
	ll a, b, c, total = 0;
	cin >> a >> b >> c;
	ll num = min({ a / 3, b / 2, c / 2 });
	total += 7 * num;
	a -= 3 * num; b -= 2 * num; c -= 2 * num;
	vll d(7, 0);
	if (a == 2 && b >= 2 && c >= 2) { cout << total + 6; return 0; }
	if (a == 2 && b >= 2 && c == 1) { cout << total + 5; return 0; }
	if (a == 2 && b >= 2 && c == 0) { cout << total + 4; return 0; }
	if (a == 2 && b == 1 && c >= 2) { cout << total + 5; return 0; }
	if (a == 2 && b == 1 && c == 1) { cout << total + 4; return 0; }
	if (a == 2 && b == 1 && c == 0) { cout << total + 3; return 0; }
	if (a == 2 && b == 1 && c == 0) { cout << total + 3; return 0; }
	if (a == 2 && b == 0 && c >= 2) { cout << total + 3; return 0; }
	if (a == 2 && b == 0 && c == 1) { cout << total + 3; return 0; }
	if (a == 2 && b == 0 && c == 0) { cout << total + 2; return 0; }
	if (a >= 3 && b >= 2 && c == 1) { cout << total + 6; return 0; }
	if (a >= 3 && b >= 2 && c == 0) { cout << total + 4; return 0; }
	if (a >= 3 && b == 1 && c >= 2) { cout << total + 6; return 0; }
	if (a >= 3 && b == 1 && c == 1) { cout << total + 5; return 0; }
	if (a >= 3 && b == 1 && c == 0) { cout << total + 3; return 0; }
	if (a >= 3 && b == 0 && c >= 2) { cout << total + 3; return 0; }
	if (a >= 3 && b == 0 && c == 1) { cout << total + 2; return 0; }
	if (a >= 3 && b == 0 && c == 0) { cout << total + 2; return 0; }
	if (a == 1 && b >= 2 && c >= 2) { cout << total + 5; return 0; }
	if (a == 1 && b >= 2 && c == 1) { cout << total + 3; return 0; }
	if (a == 1 && b >= 2 && c == 0) { cout << total + 2; return 0; }
	if (a == 1 && b == 1 && c >= 2) { cout << total + 4; return 0; }
	if (a == 1 && b == 1 && c == 1) { cout << total + 3; return 0; }
	if (a == 1 && b == 1 && c == 0) { cout << total + 2; return 0; }
	if (a == 1 && b == 1 && c == 0) { cout << total + 2; return 0; }
	if (a == 1 && b == 0 && c >= 2) { cout << total + 3; return 0; }
	if (a == 1 && b == 0 && c == 1) { cout << total + 2; return 0; }
	if (a == 1 && b == 0 && c == 0) { cout << total + 1; return 0; }
	if (a == 0 && b >= 2 && c >= 2) { cout << total + 2; return 0; }
	if (a == 0 && b >= 2 && c == 1) { cout << total + 2; return 0; }
	if (a == 0 && b >= 2 && c == 0) { cout << total + 1; return 0; }
	if (a == 0 && b == 1 && c >= 2) { cout << total + 2; return 0; }
	if (a == 0 && b == 1 && c == 1) { cout << total + 2; return 0; }
	if (a == 0 && b == 1 && c == 0) { cout << total + 1; return 0; }
	if (a == 0 && b == 1 && c == 0) { cout << total + 1; return 0; }
	if (a == 0 && b == 0 && c >= 2) { cout << total + 1; return 0; }
	if (a == 0 && b == 0 && c == 1) { cout << total + 1; return 0; }
	if (a == 0 && b == 0 && c == 0) { cout << total; return 0; }
}
	
