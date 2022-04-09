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
#include <set>
#include <numeric>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}


int main() {
	FAST;
	ll koutsu = 0, shuntsu = 0;
	map<string, ll> a;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	a[s1]++; a[s2]++; a[s3]++;
	koutsu = max(koutsu, a[s1]);
	koutsu = max(koutsu, a[s2]);
	koutsu = max(koutsu, a[s3]);
	vector<string> manzu;
	vector<string> pinzu;
	vector<string> souzu;
	if (s1[1] == 'm') { manzu.push_back(s1); }
	if (s1[1] == 'p') { pinzu.push_back(s1); }
	if (s1[1] == 's') { souzu.push_back(s1); }
	if (s2[1] == 'm') { manzu.push_back(s2); }
	if (s2[1] == 'p') { pinzu.push_back(s2); }
	if (s2[1] == 's') { souzu.push_back(s2); }
	if (s3[1] == 'm') { manzu.push_back(s3); }
	if (s3[1] == 'p') { pinzu.push_back(s3); }
	if (s3[1] == 's') { souzu.push_back(s3); }
	sort(manzu.begin(), manzu.end());
	sort(pinzu.begin(), pinzu.end());
	sort(souzu.begin(), souzu.end());
	ll sm = 1, sp = 1, ss = 1;
	for (ll i = 1; i < manzu.size(); i++) {
		if (manzu[i][0] - manzu[i - 1][0] == 1) { sm++; }
		if (manzu[i][0] - manzu[i - 1][0] == 2) { sm = 2; break; }
	}
	for (ll i = 1; i < pinzu.size(); i++) {
		if (pinzu[i][0] - pinzu[i - 1][0] == 1) { sp++; }
		if (pinzu[i][0] - pinzu[i - 1][0] == 2) { sp = 2; break; }
	}
	for (ll i = 1; i < souzu.size(); i++) {
		if (souzu[i][0] - souzu[i - 1][0] == 1) { ss++; }
		if (souzu[i][0] - souzu[i - 1][0] == 2) { ss = 2; break; }
	}
	shuntsu = max({ sm, sp, ss });
	cout << 3 - max(koutsu, shuntsu);
}
	
