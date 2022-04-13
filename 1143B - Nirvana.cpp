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
	ll n, top = 0;
	cin >> n;
	string s = to_string(n);
	for (ll i = 0; i < s.size(); i++) {
		string s1 = to_string(n);
		ll num = 1;
		for (ll j = 0; j < s1.size(); j++) {
			num *= s1[j] - 48;
		}
		top = max(num, top);
		n = n / pow(10, i + 1);
		n -= 1;
		n *= pow(10, i + 1);
		n += pow(10, i + 1) - 1;
		
	}
	cout << top;
}
