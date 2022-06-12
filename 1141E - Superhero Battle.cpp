#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}



void solve(){
    ll h, n;
    cin  >> h >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) { cin >> a[i];}
    for(ll i = 1; i < n; i++){a[i] += a[i-1];}
    ll round = a[n-1];
    for(ll i = 0; i < n; i++){
        if(a[i] * -1 >=h){cout << i + 1; return;}
    }
    if(round >= 0){
        cout << -1 << "\n"; return;
    }

    round *= -1;
    for(ll i = 0; i < n; i++){a[i] *= -1;}
    ll best = rounddiv(h, round) * n;
    for(ll i = 0; i < n; i++){
        ll nh = h - a[i];
        best = min(best, (rounddiv(nh, round) * n) + i + 1);
    }
    cout << best;
}

int main() {
    FAST;
    tc1;
}
