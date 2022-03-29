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
using namespace std;
#define ll long long 

void solve() {
	ll n;
	cin >> n;
	if (360 % (180 - n) == 0 && n != 0) {
		cout << "YES" << "\n"; return;
	}
	else{cout << "NO" << "\n"; return;}
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
