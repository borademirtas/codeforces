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
	ll l, r;
	cin >> l >> r;
	if (l % 2 != 0){ l++; }
	if (l + 2 > r) { cout << -1; }
	else { cout << l << " " << l + 1 << " " << l + 2; }
		
}
