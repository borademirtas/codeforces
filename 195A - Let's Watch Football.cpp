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
	ll a, b, c, time, ans;
	cin >> a >> b >> c;
	time = a * c - b * c;
	if (time % b == 0) { cout << time / b; }
	else { cout << time / b + 1; }

}
