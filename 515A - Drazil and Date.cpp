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
	ll a, b, s;
	cin >> a >> b >> s;
	if (s < abs(a) + abs(b)) { cout << "NO"; return 0; }
	if ((abs(a) + abs(b)) % 2 != s % 2) { cout << "NO"; return 0; }
	cout << "YES";
}	
