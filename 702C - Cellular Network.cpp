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
#define mp(A, B) make_pair(A, B)

void solve(){
    ll n, m;
    cin >> n >> m;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    set<ll> b; for (ll i = 0; i < m; i++) { ll x; cin >> x; b.insert(x);}
    ll best = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] > *--b.end()){best = max(best, a[i] - *--b.end());}
        else{
            auto it = b.lower_bound(a[i]);
            if(*it == *b.begin()){best = max(best , abs(a[i] - *it)); }
            else{
                auto it2 = it;
                it2--;
                best = max(best , min(abs(a[i] - *it), abs(a[i] - *it2)));
            }
        }
    }
    cout << best;
}

int main() {
    FAST;
    tc1;
}
