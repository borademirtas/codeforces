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
	ll a, b, c, ans1, ans2;
	string s;
	cin >> a >> b >> c;
	if (b > a) { ans1 = pow(10, a - 1) + pow(10, c - 1); ans2 = pow(10, b - 1); }
	ans1 = pow(10, a - 1); ans2 = pow(10, b - 1) + pow(10, c - 1);
	cout << ans1 << " " << ans2 << endl; return;
}

int main() {
	FAST
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
