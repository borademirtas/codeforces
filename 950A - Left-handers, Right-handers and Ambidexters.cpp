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
	ll l, r, a;
	cin >> l >> r >> a;
	while (a != 0) {
		if (l > r) { r++; a--; }
		else { l++; a--; }
	}
	cout << min(l, r) * 2;
}	
