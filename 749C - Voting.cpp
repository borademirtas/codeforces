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
    queue<ll> dpos;
    vector<bool> block(n, 0);
    queue<ll> rpos;
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'D') { dpos.push(i); }
        if (s[i] == 'R') { rpos.push(i); }
    }
    if (dpos.size() == 0) { cout << 'R'; return 0; }
    if (rpos.size() == 0) { cout << 'D'; return 0; }
    while (true) {  
        if (dpos.front() < rpos.front()) {
            rpos.pop();
            dpos.push(dpos.front() + n);
            dpos.pop();
        }
        else {
            dpos.pop();
            rpos.push(rpos.front() + n);
            rpos.pop();
        }
        if (dpos.size() == 0) { cout << 'R'; return 0; }
        if (rpos.size() == 0) { cout << 'D'; return 0; }
    }
    
}
