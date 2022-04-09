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
	ll n, total = 0, up = 0, right = 0;
	bool left = false, right2 = false;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < n; i++) {
		if (right2 == true && right == up && s[i] == 'U') { total++; }
		if (left == true && right == up && s[i] == 'R') { total++; }
		if (s[i] == 'R') { right++; }
		else { up++; }
		if (up > right) { left = true; right2 = false; }
		if (up < right) { left = false; right2 = true; }
	}
	cout << total;
}
