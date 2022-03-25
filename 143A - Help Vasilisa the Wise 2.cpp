#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
#define ll long long 



int main() {
	ll r1, r2, c1, c2, d1, d2, a1, a2, a3, a4;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for (ll i = 1; i < 10; i++) {
		a1 = i;
		for (ll j = 1; j < 10; j++) {
			a2 = j;
			for (ll n = 1; n < 10; n++) {
				a3 = n;
				for (ll m = 1; m < 10; m++) {
					a4 = m;
					if (a1 + a2 == r1 && a3 + a4 == r2 && a1 + a3 == c1 && a2 + a4 == c2 && a1 + a4 == d1 && a2 + a3 == d2 && a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4) {
						cout << a1 << " " << a2 << "\n" << a3 << " " << a4; return 0;
					}
				}
			}
		}
	}
	cout << -1;
}
