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


void solve(ll TC, ll TC2){
    ll n, m;
    string s;
    cin >> n >> m >> s;
    vp pre(n);
    vll sum(n);
    vp suf(n);
    ll cnt = 0, mn = 0, mx = 0;
    for(ll i = 0; i < n; i++) {
        if (s[i] == '-') { cnt--; }
        else { cnt++; }
        mn = min(cnt, mn);
        mx = max(mx, cnt);
        sum[i] = cnt;
        pre[i] = mp(mx, mn);
    }
    cnt = 0, mn = 0, mx =0;
    for(ll i = n-1; i >= 0; i--){
        if (s[i] == '-') { cnt++; }
        else { cnt--; }
        mn = min(cnt, mn);
        mx = max(mx, cnt);
        suf[i] = mp(mx - cnt, -1*(cnt - mn));
    }
    for(ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        if(x == 1 && y == n){cout << "1\n"; continue;}
        else if(x == 1){cout << suf[y].first - suf[y].second + 1 << "\n"; continue;}
        else if(y == n){cout << pre[x-2].first - pre[x-2].second + 1 << "\n"; continue;}
        else{
            mn = min(pre[x-2].second, sum[x-2] + suf[y].second);
            mx = max(pre[x-2].first, sum[x-2] +  suf[y].first);
            cout << mx - mn + 1 << "\n";
        }
    }
}

int main() {
    FAST;
    tc;
}
