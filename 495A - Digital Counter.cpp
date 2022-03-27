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
	string s;
	char a, b;
	ll apos, bpos;
	cin >> s;
	a = s[0];
	b = s[1];
	if (a == '0') { apos = 2; }
	if (a == '1') { apos = 7; }
	if (a == '2') { apos = 2; }
	if (a == '3') { apos = 3; }
	if (a == '4') { apos = 3; }
	if (a == '5') { apos = 4; }
	if (a == '6') { apos = 2; }
	if (a == '7') { apos = 5; }
	if (a == '8') { apos = 1; }
	if (a == '9') { apos = 2; }
	if (b == '0') { bpos = 2; }
	if (b == '1') { bpos = 7; }
	if (b == '2') { bpos = 2; }
	if (b == '3') { bpos = 3; }
	if (b == '4') { bpos = 3; }
	if (b == '5') { bpos = 4; }
	if (b == '6') { bpos = 2; }
	if (b == '7') { bpos = 5; }
	if (b == '8') { bpos = 1; }
	if (b == '9') { bpos = 2; }
	cout << apos * bpos;
}
