#include <iostream>
#include <math.h> 
#include <vector>
#include<string.h>
#include <fstream>
using namespace std;
 
 
 
int main() {
	long long k;
	long long n;
	long long w;
	long long price{0};
	cin >> k >> n >> w;
	for (long long i = 1; i <= w; i++) {
		price += i * k;
	}
	if (n > price) {
		cout << 0;
	}
	else {
		cout << price - n;
	}
 
	return 0;
}
