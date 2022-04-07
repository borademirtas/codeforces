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
	ll n, t = 0;
	cin >> n;
	vector<string> a(n);
	map <string, ll> b;
	for (ll i = 0; i < n; i++) { cin >> a[i]; b[a[i]]++; }
	for (ll i = 0; i < n; i++) { t = max(b[a[i]], t);}
	cout << t;
}
