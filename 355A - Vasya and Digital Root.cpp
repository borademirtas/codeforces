#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
using namespace std;
#define ll long long 



int main() {
	ll n, d;
	cin >> n >> d;
	if (d == 0) {
		if (n == 1) { cout << 0; return 0; }
		else { cout << "No solution"; return 0; }
	}
	cout << d;
	for (ll i = 0; i < n - 1; i++) {
		cout << 0;
	}
}
