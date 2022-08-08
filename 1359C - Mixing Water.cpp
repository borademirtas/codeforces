#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

bool check(ll h, ll c, ll t, ll m){
    long double hot = h *  1.0;
    long double cold = c * 1.0;
    long double target = t * 1.0;
    long double x  = (hot + hot * m + cold * m) / (m*2+1);
    if(x > target){return true;}
    else{return false;}
}

void solve(ll TC, ll TC2){
    ll h, c, t;
    cin >> h >> c >> t;
    if(h+c >= (t * 2)){cout << "2\n"; return;}
    ll l = 0, r = 1e9;
    while(r - l > 1){
        ll m = (l+r)/2;
        if(check(h, c, t, m)){l = m;}
        else{r = m;}
    }
    pair<ll, ll> one = mp( abs(t * (l*2+1)  - (h+h*l+c*l)), l *2 + 1);
    pair<ll, ll> two = mp( abs(t * (r*2+1)  - (h+h*r+c*r)), r *2 + 1);
    ll y = one.first * two.second - one.second * two.first;
    if(y > 0){cout << r * 2 + 1 << "\n";}
    else{cout << l * 2 + 1 << "\n";}
}

int main() {
    FAST;
    tc;
}
