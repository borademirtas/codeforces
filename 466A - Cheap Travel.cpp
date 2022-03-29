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



int main() {
	ll n, m, a, b, total = 0;
	double mcost, regcost;
	double bf, mf;
	cin >> n >> m >> a >> b;
	regcost = a;
	bf = b;
	mf = m;
	mcost = bf / mf;
	if (mcost < regcost) {
		while (n >= m) {
			total += b;
			n -= m;
		}
		if (n != 0) {
			total += min(n * a, b);
		}
	}
	else { total = n * a; }
	cout << total;
}
