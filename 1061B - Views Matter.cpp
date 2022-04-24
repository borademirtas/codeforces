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
#include <deque>
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

int main() {
	FAST;
	ll n, m, total = 0, h;
	cin >> n >> m;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	remove(a.begin(), a.end(), 0);
	vll b = a;
	for (ll i = 0; i < a.size() - 1; i++) {
		if (a[i] <= a[i + 1]) { a[i + 1] = a[i] - 1; }
		if (a[i + 1] == 0) { a[i + 1] = 1;}
	}
	for (ll i = 0; i < a.size() - 1; i++) {
		total += a[i] - 1;
		total += b[i] - a[i];
		if (a[i] - a[i + 1] > 1) { total -= a[i] - a[i + 1] - 1; }
	}
	total += b[a.size() - 1] - a[a.size() - 1];
	cout << total;
}
	
	
