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



int main() {
	FAST;
	ll k, n, total = 0;
	cin >> n >> k;
	vector<pair<ll,ll>> a(n); 
	vector<pair<ll, ll>> b;
	vll m(k);
	vll j(k);
	for (ll i = 0; i < n; i++) { cin >> a[i].first; a[i].second = i + 1; }
	b = a;
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	for (ll i = 0; i < k; i++) { m[i] = b[i].first; total += m[i]; j[i] = b[i].second; }
	cout << total << "\n";
	sort(j.begin(), j.end());
	if (j.size() == 1) { cout << n; return 0; }
	cout << j[0] << " ";
	for (ll i = 1; i < j.size(); i++) {
		if (i != j.size() - 1) { cout << j[i] - j[i - 1] << " "; }
		else { cout << j[i] - j[i - 1] + (n - j[i]); }
	}

}
