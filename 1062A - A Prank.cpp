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
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	


int main() {
	FAST;
	ll n, streak = 1, top = 0, onetop = 0, lasttop = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	for (ll i = 1; i < n; i++) {
		if (a[i] - 1 == a[i - 1]) { streak++; }
		else { streak = 1; }
		top = max(streak, top);
	}
	streak = 1;
	if (a[0] == 1) {
		for (ll i = 1; i < n; i++) {
			if (a[i] - 1 == a[i - 1]) { streak++; }
			else { break; }
		}

		onetop = streak;
		streak = 1;
	}
	if (a[n - 1] == 1000) {
		for (ll i = n - 1; i > 0; i--) {
			if (a[i] - 1 == a[i - 1]) { streak++; }
			else { break; }
		}

		lasttop = streak;
	}
	cout << max({ top - top, top - 2, onetop - 1, lasttop - 1 });
	
}
	
