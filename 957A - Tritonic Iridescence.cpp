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
    ll n;
    string s;
    cin >> n >> s;
    for (ll i = 0; i < s.size() - 1; i++) { if (s[i] == s[i + 1] && s[i] != '?') { cout << "No"; return 0; }}
    for(ll i = 0; i < s.size() - 1; i++){ if (s[i] == s[i + 1] && s[i] == '?') { cout << "Yes"; return 0; } }
    for (ll i = 1; i < s.size() - 1; i++) { if (s[i] == '?' && s[i - 1] == s[i + 1]) { cout << "Yes"; return 0; } }
    if (s[0] == '?' || s[n - 1] == '?') { cout << "Yes"; return 0; }
    cout << "No"; return 0;
}
