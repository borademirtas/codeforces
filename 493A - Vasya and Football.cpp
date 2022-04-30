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
    string h, a;
    ll n;
    cin >> h >> a >> n;
    mpll home;
    map<ll, bool> homecount;
    map<ll, bool> awaycount;
    mpll away;
    for (ll i = 0; i < n; i++) {
        ll m, num;
        char t, c;
        cin >> m >> t >> num >> c;
        if (t == 'h') { home[num]++; if (c == 'r') { home[num]++; } if (home[num] > 1 && homecount[num] != true) { cout << h << " " << num << " " << m << "\n"; homecount[num] = true; } }
        if (t == 'a') { away[num]++; if (c == 'r') { away[num]++; } if (away[num] > 1 && awaycount[num] != true) { cout << a << " " << num << " " << m << "\n"; awaycount[num] = true;} }
    }
}
