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
#define pbb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout


int main() {
	FAST;
	string s;
	cin >> s;
	map<char, ll> b;
	for (ll i = 0; i < s.size(); i++) {
		b[s[i]]++;
	}
	if (b['a'] != b['c'] && b['b'] != b['c']) { cout << "NO"; return 0; }
	if (b['a'] == 0 || b['b'] == 0) { cout << "NO"; return 0; }
	string s1;
	s1 = s;
	sort(s1.begin(), s1.end());
	if (s1 != s) { cout << "NO"; return 0; }
	else { cout << "YES"; return 0; }
}
	
	
