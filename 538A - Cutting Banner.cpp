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
	string s, cf = "CODEFORCES";
	cin >> s;
	if (s.size() < 11) { cout << "NO"; return 0; }
	for (ll i = 0; i < s.size(); i++) {
		for (ll j = i; j < s.size(); j++) {
			string s1 = s;
			s1.erase(s1.begin() + i, s1.begin() + j);
			if (s1 == cf) { cout << "YES"; return 0; }
		}
	}
	for (ll i = 0; i < 1; i++) {
		if (s[i] == 'C' && s[i + 1] == 'O' && s[i + 2] == 'D' && s[i + 3] == 'E' && s[i + 4] == 'F' && s[i + 5] == 'O' && s[i + 6] == 'R' && s[i + 7] == 'C' && s[i + 8] == 'E' && s[i + 9] == 'S') { cout << "YES"; return 0; }
	}
	cout << "NO"; return 0;
}
