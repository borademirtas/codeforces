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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
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



void solve(ll TC){
    ll n, k;
    string s;
    cin >> n >> k >> s ;
    ll bal = 0;
    vll pos;
    ll ans = 0;
    if(k == 0){ans++;}
    for(ll i = 0; i < n; i++){
        if(s[i] == '0'){bal++;}
        else{bal--;}
        pos.pb(bal);
    }
    if(bal == 0){
        for(ll i = 0; i < n; i++){
            if(pos[i] == k){cout << -1 << "\n"; return; }
        }
        cout << 0 << "\n"; return;
    }
    for(ll i = 0; i < n; i++){
        ll tgt = k - pos[i];
        if(tgt / bal >= 0 && tgt % bal == 0){ans++;}
    }
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
