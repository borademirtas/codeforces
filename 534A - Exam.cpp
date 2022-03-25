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
	ll n;
	cin >> n;
	if (n == 1) { cout << 1 << "\n" << 1; return 0; }
	if (n == 2) { cout << 1 << "\n" << 1; return 0; }
	if (n == 3) { cout << 2 << "\n" << 1 << " " << 3; return 0; }
	if (n == 4) { cout << 4 << "\n" << 3 << " " << 1 << " " << 4 << " " << 2; return 0; }
	else {
		cout << n << "\n";
		for (ll i = 1; i <= n; i++) {
			cout << i << " ";
			i++;
		}
		for (ll i = 2; i <= n; i++) {
			cout << i << " ";
			i++;
		}
	}
}
