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
	ll n, k;
	cin >> n >> k;
	ll g_used = 0;
	map<char, ll> a;
	string s;
	cin >> s;
	for (ll i = 0; i < s.size(); i++) {
		a[s[i]]++;
	}
	map<char, ll> b;
	b = a;
	for (ll i = 0; i < s.size(); i++) {
		if (a[s[i]] == b[s[i]]) { g_used++; };
		if (g_used > k) { cout << "YES"; return 0; }
		a[s[i]]--;
		if (a[s[i]] == 0) { g_used--; }
	}
	cout << "NO"; return 0;
}
