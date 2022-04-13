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

int main() {
	FAST;
	ll n;
	cin >> n;
	vector <vll> a(n, vector<ll>(n));
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	ll num = sqrt((a[0][1] * a[0][2]) / a[1][2]);
	cout << num << " ";
	for (ll i = 1; i < n; i++) {
		cout << a[0][i] / num << " ";
	}
}
	
