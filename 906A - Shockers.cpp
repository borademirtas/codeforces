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
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)

void solve() {
    ll n;
    cin >> n;
    vll a(26);
    ll okc = 0;
    vector<char> b(n);
    vector<string> c(n);
    vector<bool> ok(n, true);
    for(ll i = 0; i < n; i++){
        string s;
        cin >> b[i] >> s;
        string ns;
        mpll t;
        for(ll j = 0; j < s.size(); j++){t[s[j]]++; if(t[s[j]] == 1){ns.pb(s[j]);}}
        c[i] = ns;

    }
    ll ec = 0;
    for(ll i = 0; i < n; i++){
        if(b[i] == '!'){
            for(ll j = 0; j < c[i].size(); j++){a[c[i][j] - 'a']++; }
            ec++;
        }
        else{
            for(ll j = 0; j < c[i].size(); j++){if(ok[c[i][j] - 'a']){ok[c[i][j] - 'a'] = false; okc++;}}
        }
        ll oc = 0;
        for(ll j = 0; j < 26; j++){
            if(a[j] == ec && ok[j]){oc++;}
        }
        if(oc == 1){
            ll ans = 0;
            for(ll j = i + 1; j < n - 1; j++){if(b[j] == '?' || b[j] == '!'){ans++;}}
            cout << ans; return;
        }
    }
    cout << 0;
}

int main() {
    FAST;
    tc1;
}
