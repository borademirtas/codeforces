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
	ll n, x, one_count = 0, two_count = 0, three_count = 0;
	cin >> n >> x;
	vector<ll> arr(n * 2);

	for (ll i = 0; i < n * 2; i++) {
		cin >> arr[i];
		if (arr[i] == 1 || arr[i] == 6) { one_count++; }
		if (arr[i] == 2 || arr[i] == 5) { two_count++; }
		if (arr[i] == 3 || arr[i] == 4) { three_count++; }

	}
	vector<ll> nums{one_count, two_count, three_count};
	sort(nums.begin(), nums.end());
	nums[2] + nums[1] == n * 2 ? cout << "YES" : cout << "NO";
}
