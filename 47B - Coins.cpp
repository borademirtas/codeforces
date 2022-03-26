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
	ll a = 0, b = 0, c = 0;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	if (s1[1] == '>') {
		if (s1[0] == 'A') { a++; }
		if (s1[0] == 'B') { b++; }
		if (s1[0] == 'C') { c++; }
	}
	if (s1[1] == '<') {
		if (s1[2] == 'A') { a++; }
		if (s1[2] == 'B') { b++; }
		if (s1[2] == 'C') { c++; }
	}
	if (s2[1] == '>') {
		if (s2[0] == 'A') { a++; }
		if (s2[0] == 'B') { b++; }
		if (s2[0] == 'C') { c++; }
	}
	if (s2[1] == '<') {
		if (s2[2] == 'A') { a++; }
		if (s2[2] == 'B') { b++; }
		if (s2[2] == 'C') { c++; }
	}
	if (s3[1] == '>') {
		if (s3[0] == 'A') { a++; }
		if (s3[0] == 'B') { b++; }
		if (s3[0] == 'C') { c++; }
	}
	if (s3[1] == '<') {
		if (s3[2] == 'A') { a++; }
		if (s3[2] == 'B') { b++; }
		if (s3[2] == 'C') { c++; }
	}
	if (a == b) { cout << "Impossible"; return 0; }
	if (c == 0) { cout << "C"; }
	if (a == 0) { cout << "A"; }
	if (b == 0) { cout << "B"; }
	if (c == 1) { cout << "C"; }
	if (a == 1) { cout << "A"; }
	if (b == 1) { cout << "B"; }
	if (c == 2) { cout << "C"; }
	if (a == 2) { cout << "A"; }
	if (b == 2) { cout << "B"; }
}
	
