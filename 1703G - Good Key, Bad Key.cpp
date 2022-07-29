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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

vector<vector<ll>> pos;

void fill(ll x, ll num){
    pos[x].resize(32);
    pos[x][0] = num;
    for(ll i = 1; i < 32; i++){
        num /= 2;
        pos[x][i] = num;
    }
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i];}
    pos.resize(n);
    for(ll i = 0; i < n; i++){
        fill(i, a[i]);
    }
    ll csum = 0;
    ll x = 0;
    for(ll i = 0; i < min(n, 31 + n - n); i++){
        x += pos[i][i+1];
    }
    ans = max(ans, x);
    for(ll i = 0; i < n; i++){
        csum += a[i];
        csum -= k;
        x = 0;
        for(ll j = i + 1; j < min(n, 31 + i); j++){x += pos[j][j-i];}
        ans = max(x + csum, ans);
    }
    cout << ans << "\n";
}


int main() {
    FAST;
    tc;
}
