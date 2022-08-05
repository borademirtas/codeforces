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


pair<ll, pair<ll,ll>> check(vll b){
    vll c;
    c.pb(1);
    for(ll i = 1; i < b.size(); i++){
        c.pb(((b[i] - b[i-1]) - 1) * -1);
        c.pb(1);
    }
    ll mx = INT_MIN, mxe = 0, start = 0, end = 0, s = 0, size = c.size();
    for (int i=0; i< size; i++ )
    {
        mxe += c[i];

        if (mx < mxe)
        {
            mx = mxe;
            start = s;
            end = i;
        }

        if (mxe < 0)
        {
            mxe = 0;
            s = i + 1;
        }
    }
    return mp(mx, mp(start, end));
}

void solve(ll TC, ll TC2) {

    ll n;
    cin >> n;
    vll a(n);
    vector<vll> b(n);
    mpll c;
    mpll e;
    vll f(n);
    ll best = 0;
    ll l = 0, r = 0, num = 0;
    ll count = -1;
    for(ll i = 0; i < n; i++){cin >> a[i];}
    for(ll i = 0 ; i < n; i++){
        c[a[i]]++;
        if(c[a[i]] == 1){count++; e[a[i]] = count; f[count] = a[i];}
        b[e[a[i]]].pb(i);
    }
    for(ll i = 0; i <= count; i++){
        pair<ll, pair<ll,ll>> d = check(b[i]);
        if(d.first > best){best = d.first; num = f[i]; l = b[i][d.second.first/2]; r = b[i][d.second.second/2];}
    }
    cout << num << " " << l + 1 << " " << r + 1 << "\n";
}

int main() {
    FAST;
    tc;
}
