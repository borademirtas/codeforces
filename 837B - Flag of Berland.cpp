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
    ll n, m, streak = 1;
    cin >> n >> m;
    set<char> check;
    vector<string> s(n);
    for (ll i = 0; i < n; i++) { cin >> s[i]; }
    bool hor = true, vert = true, horcor = false, vertcor = false;
    vector<char> vertc;
    vector<char> horc;
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j < m; j++) {
            if (s[i][j] != s[i][j - 1]) { hor = false; }
        }
        if (hor == false) { break; }
    }
    for (ll i = 0; i < m; i++) {
        for (ll j = 1; j < n; j++) {
            if (s[j][i] != s[j - 1][i]) { vert = false; }
        }
        if (vert == false) { break; }
    }
    if (n % 3 != 0) { hor = false; }
    if (m % 3 != 0) { vert = false; }
    if (vert == true) {
        for (ll i = 0; i < m; i++) { vertc.push_back(s[0][i]); }
    }
    if (hor == true) {
        for (ll i = 0; i < n; i++) { horc.push_back(s[i][0]); }
    }
    ll dif = 0;
    for (ll i = 1; i < vertc.size(); i++) { if (vertc[i] != vertc[i - 1]) { dif++;  }}
    if (dif == 2) { vertcor = true; }
    if (vertcor == true) {
        for (ll i = 1; i < vertc.size(); i++) { if (vertc[i] != vertc[i-1]) {if (streak != m / 3) { vertcor = false; } streak = 1; } else { streak++; } }
    }
    dif = 0;
    for (ll i = 1; i < horc.size(); i++) {
        if (horc[i] != horc[i - 1]) { dif++; }
    }
    streak = 1;
    if (dif == 2) { horcor = true; }
    if (vertcor == true) { for (ll i = 0; i < vertc.size(); i++) { check.insert(vertc[i]); } }
    if (horcor == true) { for (ll i = 0; i < horc.size(); i++){check.insert(horc[i]); } }
    if (horcor == true) {
        for (ll i = 1; i < horc.size(); i++) { if (horc[i] != horc[i-1]) {if (streak != n / 3) { horcor = false; } streak = 1; } else { streak++; } }
    }
    if (check.size() != 3) { horcor = false; vertcor = false; }
    if (horcor == true || vertcor == true) { cout << "YES\n"; }
    else { cout << "NO\n"; }
}
