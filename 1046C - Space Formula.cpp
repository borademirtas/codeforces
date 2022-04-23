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
#define mpll c;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	ll n, d, l = 1, r;
	bool found = false;
	cin >> n >> d;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	vll b(n); for (ll i = 0; i < n; i++) { cin >> b[i]; }
	r = n - 1;
	a[d - 1] += b[0];
	ll num = a[d - 1];
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < a.size(); i++) {
		if (a[i] > num) { a[i] += b[l]; l++; }
		if (a[i] < num) { a[i] += b[r]; r--; }
		if (a[i] == num) {
			if (found == false) { found = true; }
			else{ a[i] += b[r]; r--; }
		}
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < a.size(); i++) {
		if (a[i] == num) { cout << i + 1; return 0; }
	}
}
