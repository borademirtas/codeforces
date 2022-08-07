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
    ll n;
    cin >> n;
    mpll d1;
    mpll d2;
    ll dif = 0;
    vll a(n);  for (ll i = 0; i < n; i++) { cin >> a[i]; if(a[i] == 1){dif--;} else{dif++;} }
    vll b(n);  for (ll i = 0; i < n; i++) { cin >> b[i]; if(b[i] == 1){dif--;} else{dif++;}  }
    reverse(all(a));
    ll bal1 = 0;
    ll bal2 = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] == 1){bal1--;} else{bal1++;}
        if(b[i] == 1){bal2--;} else{bal2++;}
        if(d1[bal1] == 0){d1[bal1] = i+1;}
        if(d2[bal2] == 0){d2[bal2] = i+1;}
    }
    vp pos;
    if(dif == 0){cout << "0\n"; return;}
    if(dif < 0){
        ll l = dif + 1;
        ll r = -1;
        while(r >= l){
            pos.pb(mp(l,r));
            l++; r--;
        }
    }
    if(dif > 0){
        ll l = dif - 1;
        ll r = 1;
        while(l >= r){
            pos.pb(mp(l,r));
            l--; r++;
        }
    }
    ll best = n * 2;
    if(d1[dif] != 0){best = min(best, d1[dif]);} if(d2[dif] != 0){best = min(best, d2[dif]);}
    for(ll i = 0; i < pos.size(); i++){
        if(d1[pos[i].first] != 0 && d2[pos[i].second] != 0){best = min(best, d1[pos[i].first] + d2[pos[i].second]);}
        if(d2[pos[i].first] != 0 && d1[pos[i].second] != 0){best = min(best, d2[pos[i].first] + d1[pos[i].second]);}
    }
    cout << best << "\n";
}

int main() {
    FAST;
    tc;
}
