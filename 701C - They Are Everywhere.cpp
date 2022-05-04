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
#include <fstream>
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
#define FIXED(A) cout << std::fixed << A << std::endl;


int main() {
        FAST;
        ll n;
        string s;
        cin >> n >> s;
        map<char, ll> b;
        for (ll i = 0; i < n; i++) {
            b[s[i]]++;
        }
        ll total = b.size();
        if (total == 1) { cout << 1; return 0; }
        ll l = 0, r = 1;
        b.clear();
        b[s[0]]++;
        ll tot = 1;
        ll best = 100000;
        while (r != n && l != n) {
            while (b[s[l]] <= 1 && r != n) { b[s[r]]++; if (b[s[r]] == 1) { tot++; } if (tot == total) { best = min(r - l + 1, best); } r++; }
            if (r == n) { break; }
            b[s[l]]--; l++;
            if (tot == total) { best = min(r - l, best); }
        }
        while (l != n) {
            if (b[s[l]] > 1) { b[s[l]]--; l++; }
            else { break; }
            best = min(r - l, best);
       }
       cout << best;
}
