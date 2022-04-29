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
#include <deque>
#include <climits>
#include <iomanip>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));

int main() {
    FAST;
    ll n, ec = 0, n1c = 0, m;
    string s;
    cin >> n >> s;
    ll num = (n - 11) / 2 + 1;
    for (ll i = 0; i < s.size(); i++) { if (s[i] == '8') { ec++; if (ec == num) { m = n1c; } } else { if (ec < num) { n1c++; } } }
    if (ec <= (n - 11) / 2) { cout << "NO"; return 0; }
    if(m <= (n-11) / 2) { cout << "YES"; return 0; }
    else{ cout << "NO"; return 0; }

}
