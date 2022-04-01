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


void solve() {
	ll n;
	float x = 0;
	cin >> n;
	for (ll i = 1; i < cbrt(n); i++) {
		if(fmod(cbrt(n - (i * i * i)), 1) == x ){cout << "YES" << endl; return;}
	}
	cout << "NO" << endl; return;
}

int main() {
	FAST
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
