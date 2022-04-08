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



int main() {
	FAST;
	ll n;
	string s;
	cin >> n >> s;
	for (ll i = 1; i < n; i++) { if (s[i] == '1' && s[i - 1] == '1') { cout << "NO"; return 0; } }
	for (ll i = 1; i < n - 1; i++) { if (s[i] == '0' && s[i - 1] == '0' && s[i + 1] == '0') { cout << "NO"; return 0; } }
	if (n == 1 && s[0] == '0') { cout << "NO"; return 0; }
	if (s[0] == '0' && s[1] == '0') { cout << "NO"; return 0; }
	if (s[n-1] == '0' && s[n-2] == '0') { cout << "NO"; return 0; }
	cout << "YES"; return 0;
}
