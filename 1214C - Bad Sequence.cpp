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
	ll n, b = 0, m;
	cin >> n;
	string s;
	cin >> s;
	for (ll i = 0; i < n; i++) {
		if (s[i] == '(') { b++; }
		if (s[i] == ')') { b--; }
		m = min(m, b);
	}
	if (b == 0 && m >= -1) { cout << "Yes"; }
	else { cout << "No"; }
}
	
