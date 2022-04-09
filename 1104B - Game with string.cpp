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


int main() {
	FAST;
	ll total = 0;
	string n, s; 
	cin >> n;
	for (ll i = 0; i < n.size(); i++) {
		s.push_back(n[i]);
		if (s.size() > 1) { if (s[s.size() - 1] == s[s.size() - 2]) { total++; s.pop_back(); s.pop_back(); } }
	}
	if (total % 2 == 0) { cout << "No"; }
	else { cout << "Yes"; }

}
