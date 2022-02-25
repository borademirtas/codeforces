#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
using namespace std;


int main() {

	long long n, k;
	cin >> n >> k;
	if (k * 2 - 1 <= n) { cout << k * 2 - 1; }
	else { cout << (k - (n + 1) / 2) * 2; }
	
}
