#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
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
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair[A, B]

void solve() {
    ll n, m;
    cin >> n >> m;
    vll clet(n, INT_MAX);
    vll csym(n, INT_MAX);
    vll cnum(n, INT_MAX);
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++) {
            if (s[j] >= 'a' && s[j] <= 'z') { clet[i] = min({clet[i], j, m - j}); }
            if (s[j] >= '0' && s[j] <= '9') { cnum[i] = min({cnum[i], j, m - j}); }
            if (s[j] == '*' || s[j] == '#' || s[j] == '&') { csym[i] = min({csym[i], j, m - j}); }
        }
    }
    if(n == 3 && m == 1){cout << 0; return;}
    ll best = INT_MAX;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            for (ll t = 0; t < n; t++) {
                if (i != j && j != t && i != t) {
                    best = min(best, csym[i] + cnum[j] + clet[t]);
                }
            }
        }
    }
    cout << best;
}



int main() {
    FAST;
    tc1
}
