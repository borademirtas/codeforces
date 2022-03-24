#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
using namespace std;
#define ll long long 



int main(){
	ll n;
	cin >> n;
	vector<ll> arr2(n);
	vector<ll> arr(n);
	for (ll i = 0; i < n; i++) {
		cin >> arr2[i];
		arr[arr2[i] - 1] = i + 1;
	}
	for (ll i = 0; i < n - 1; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << arr[n - 1];
}
