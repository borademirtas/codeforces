#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
using namespace std;
#define ll long long 



int main() {
	ll n, m, total = 0;
	cin >> n >> m;
	while (n + m > 3) {
		if (n == 2 && m == 2) { total++; cout << total; return 0; }
		total++;
		if (n > m) { n -= 2; m++; }
		else { n++; m -= 2; }
	}
	if(n + m == 3) { total++; }
	cout << total;
}
