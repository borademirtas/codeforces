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
    ll n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    vector<vll> a(27);
    vector<vll> b(27);
    for(ll i = 0; i < n;i++){
        if(s1[i] == '?'){a[26].pb(i+1);}
        else{
            a[s1[i] - 'a'].pb(i+1);
        }
    }
    for(ll i = 0; i < n;i++){
        if(s2[i] == '?'){b[26].pb(i+1);}
        else{
            b[s2[i] - 'a'].pb(i+1);
        }
    }
    vp ans;
    for(ll i = 0; i < 26; i++){
        for(ll j = 0; j < min(a[i].size(), b[i].size()); j++){
            ans.pb(mp(a[i][a[i].size() - 1- j], b[i][b[i].size() - 1 - j]));
        }
        ll num = min(a[i].size(), b[i].size());
        for(ll j = 0; j < num; j++){
            a[i].pop_back();
            b[i].pop_back();
        }
    }
    for(ll i = 0; i < 26; i++){
        for(ll j = 0; j < min(a[i].size(), b[26].size()); j++){
            ans.pb(mp(a[i][a[i].size() - 1- j], b[26][b[26].size() - 1 - j]));
        }
        ll num = min(a[i].size(), b[26].size());
        for(ll j = 0; j < num; j++){
            a[i].pop_back();
            b[26].pop_back();
        }
        for(ll j = 0; j < min(b[i].size(), a[26].size()); j++){
            ans.pb(mp(a[26][a[26].size() - 1 - j], b[i][b[i].size() - 1- j]));
        }
        num = min(a[26].size(), b[i].size());
        for(ll j = 0; j < num; j++){
            a[26].pop_back();
            b[i].pop_back();
        }
    }
    for(ll i = 0; i < min(a[26].size(), b[26].size()); i++){
        ans.pb(mp(a[26][a[26].size() - 1 - i], b[26][b[26].size() - 1- i]));
    }
    cout << ans.size() << "\n";
    for(ll i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
}

int main() {
    FAST;
    tc1;
}
