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
	ll time = 14, days = 0;
	ll h1, h2, a, b;
	cin >> h1 >> h2 >> a >> b;
	if (h1 + a * 8 < h2 && b >= a) { cout << -1; return 0; }
	if (h1 + a * 8 >= h2) { cout << 0; return 0; }
	while (true) {
		time++; 
		if (time <= 22 && time > 10) { h1 += a; }
		else { h1 -= b; }
		if (time == 24) { time = 0; days++; }
		if (h1 >= h2) { break; }
	}
	cout << days;
}
	
	
