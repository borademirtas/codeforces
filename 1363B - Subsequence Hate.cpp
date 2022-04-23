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

void solve() {
	string s;
	cin >> s;
	ll total = s.size(), one = 0, zero = 0, newone = 0, newzero = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '1') { one++; }
		else { zero++; }
	}
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '1') { one--; newone++; }
		else { zero--; newzero++; }
		total = min({ ((newone + newzero) - newzero) + ((one + zero) - one), ((newone + newzero) - newone) + ((one + zero) - zero), total });
	}
	cout << total << '\n';
	
}

int main() {
	FAST;
	tc;
}
	
	
