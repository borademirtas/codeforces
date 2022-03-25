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
	ll n, x = 0, z, v;
	ll m, t;
	char first, last;
	cin >> n;
	string s;
	cin >> s;
	while (s[x] == '.') { x++; }
	first = s[x];
	z = x;
	v = x;
	while (s[v] == s[x]) { v++; }
	while (s[z] != '.') { z++; }
	last = s[z - 1];
	if (last == 'L' && first == 'L') { cout << z << " " << x; }
	else if (last == 'R' && first == 'R') { cout << x + 1 << " " << z + 1; }
	else{ cout << x + 1 << " " << v; }

}	
