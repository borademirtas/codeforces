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
	int n, count = 0;
	cin >> n;
	char c;
	map<char, int> keys;
	for (int i = 0; i < n * 2 - 2; i++) {
		cin >> c;
		if (c > 96) { keys[c]++; }
		else {
			if (keys[tolower(c)] > 0){ keys[tolower(c)]--; }
			else { count++; }
		}
	}
	cout << count;
}
