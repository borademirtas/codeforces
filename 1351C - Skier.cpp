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

void solve(){
    string s;
    ll total = 0;
    pair<ll, ll> pos;
    pos.first = 0; pos.second = 0;
    cin >> s;
    map<pair<pair<ll, ll>, pair<ll, ll>>, ll> path;
    for (ll i = 0; i < s.size(); i++) {
        pair oldpos = pos;
        if (s[i] == 'W') { pos.first--; }
        if (s[i] == 'E') { pos.first++; }
        if (s[i] == 'N') { pos.second++; }
        if (s[i] == 'S') { pos.second--; }
        if (path[make_pair(pos, oldpos)] > 0) { path[make_pair(pos, oldpos)]++; }
        else{ path[make_pair(oldpos, pos)]++; }
        if (path[make_pair(oldpos, pos)] > 1 || path[make_pair(pos, oldpos)] > 1) { total += 1; }
        else { total += 5; }
    }
    cout << total << "\n";
}

int main() {
    FAST;
    tc;
}
