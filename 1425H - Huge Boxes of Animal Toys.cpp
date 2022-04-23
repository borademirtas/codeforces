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
#include <queue>
#include <list>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

void solve() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	bool balanced;
	if ((a+b) % 2 == 1) { balanced = false; }
	else { balanced = true; }
	if (balanced == false && (a != 0 || d != 0)) { cout << "Ya "; }
	else { cout << "Tidak "; }
	if (balanced == false && (b != 0 || c != 0)) { cout << "Ya "; }
	else { cout << "Tidak "; }
	if (balanced == true && (b != 0 || c != 0)) { cout << "Ya "; }
	else { cout << "Tidak "; }
	if (balanced == true && (a != 0 || d != 0)) { cout << "Ya\n"; }
	else { cout << "Tidak\n"; }
}

int main() {
	FAST;
	tc;
}
