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

void solve() {
	ll n, t_count = 0, m_count = 0;
	string s;
	cin >> n >> s;
	ll t = n / 3 * 2;
	ll m = n / 3;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'T') { t_count++; }
		if (s[i] == 'M') { m_count++; }
		if (m_count > t_count || m - m_count > t - t_count ) { cout << "NO\n"; return; }
	}
	if(t_count != m_count * 2 || s[n-1] == 'M') { cout << "NO\n"; return; }
	cout << "YES\n"; return;
}
	



int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
