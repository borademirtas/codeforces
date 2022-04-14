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
	ll n, k;
	cin >> n >> k;
	queue<ll> q;
	map<ll, bool> b;
	for (ll i = 0; i < n; i++) { ll x; cin >> x; if (b[x] == true) { continue; } else { q.push(x); b[x] = true; if (q.size() > k) { b[q.front()] = false; q.pop(); } } }
	cout << q.size() << "\n";
	ll t = q.size();
	vll a(t);
	for (ll i = 0; i < t; i++) {
		a[i] = q.front();
		q.pop();
	}
	reverse(a.begin(), a.end());
	for (ll i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}
