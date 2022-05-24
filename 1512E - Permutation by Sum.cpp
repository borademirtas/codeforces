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


void solve(){
    ll n, l, r, s;
    cin >> n >> l >> r >> s;
    vll dif(r- l + 1);
    ll total = 0;
    for(ll i = 0; i < dif.size(); i++){
        dif[i] = n - i;
        total += dif[i];
    }
    ll mn = 0;
    for(ll i = 0; i < dif.size(); i++){
        mn += i + 1;
    }
    if(mn > s){cout << -1 << "\n"; return; }
    if(total < s){cout << -1 << "\n"; return;}
    reverse(dif.begin(), dif.end());
    r--;
    l--;
    ll p = 0;
    while(total != s){
        dif[p]--;
        total--;
        p++;
        if(p == dif.size()){p = 0;}
    }
    vector<bool> used(n+1, 0);
    for(ll i = 0; i < dif.size(); i++){
        used[dif[i]] = true;
    }
    for(ll i = 0; i < l; i++){
        for(ll j = 1; j < n+ 1; j++){
            if(!used[j]){cout << j << " "; used[j] = true; break;}
        }
    }
    for(ll i = 0; i < dif.size(); i++){cout << dif[i] << " ";}
    for(ll i = r + 1; i < n; i++){
        for(ll j = 1; j < n+ 1; j++){
            if(!used[j]){cout << j << " "; used[j] = true; break;}
        }
    }
    cout << "\n";
}

int main() {
    FAST;
    tc;
}
