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
	ll c1, c2, c3, c4, c5, total;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	total = c1 + c2 + c3 + c4 + c5;
	if (total % 5 != 0 || total == 0) { cout << -1;}
	else { cout << total / 5; }
}
