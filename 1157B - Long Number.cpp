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
#define mpll map<ll,ll> b;


int main() {
	FAST;
	ll n;
	bool activated = false;
	bool used = false;
	string s;
	cin >> n >> s;
	vll a(10);
	vll top(10);
	for (ll i = 1; i < 10; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++) {
		ll num = s[i] - 48;
		if (num < a[num] && used == false) { activated = true; }
		if (num > a[num] && activated == true) { activated = false; used = true; }
		if (activated == true) { cout << a[num]; }
		else { cout << num; }
	}

}
