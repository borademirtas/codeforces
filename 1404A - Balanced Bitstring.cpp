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
    cin >> n >> k >> s;
    vector<set<ll>> a(k);
    for(ll i = 0; i < n; i++){
        if(s[i] != '?'){
            a[i % k].insert(s[i]);
        }
    }
    for(ll i = 0; i < k; i++){
        if(a[i].size() == 2){cout << "NO\n"; return;}
        if(a[i].size() == 1){
            for(ll j = i; j < n; j += k){
                s[j] = *a[i].begin();
            }
        }
    }
    ll oc = 0, zc = 0;
    ll l = 0, r = k;
    for(ll i = 0; i < k; i++){
        if(s[i] == '0'){zc++;}
        if(s[i] == '1'){oc++;}
    }
    if(zc > k / 2 || oc > k / 2){cout << "NO\n"; return;}
    while(r != n){
        if(s[r] == '0'){zc++;}
        if(s[r] == '1'){oc++;}
        if(s[l] == '0'){zc--;}
        if(s[l] == '1'){oc--;}
        if(zc > k / 2 || oc > k / 2){cout << "NO\n"; return;}
        r++; l++;
    }
    cout << "YES\n";
}

int main() {
    FAST;
    tc;
}
