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
	ll size1 = 0, size2 = 0, extrasize, sizeone, sizetwo;
	string s1, s2;
	cin >> s1 >> s2;
	extrasize = s2.size();
	while (s1[size1] != '|') { size1++; }
	size2 = s1.size() - size1 - 1;
	sizetwo = size2;
	sizeone = size1;
	while (extrasize != 0) {
		size2 > size1 ? size1++ : size2++;
		extrasize -= 1;
	}
	if (size2 != size1) { cout << "Impossible"; }
	else {
		for (ll i = 0; i < sizeone; i++) { cout << s1[i]; }
		for (ll i = 0; i < size1 - sizeone; i++) { cout << s2[i]; }
		cout << '|';
		for (ll i = 0; i < sizetwo; i++) { cout << s1[sizeone + 1 + i]; }
		for (ll i = 0; i < size2 - sizetwo; i++) { cout << s2[i + size1 - sizeone]; }
	}
}
