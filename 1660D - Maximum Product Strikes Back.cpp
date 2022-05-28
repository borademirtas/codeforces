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
#define mp(A, B) make_pair(A, B)


void solve(){
    ll n;
    cin >> n;
    ll l = 0, r = 0;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    map<ll, vll> b;
    map<ll, pair<ll,ll>> times;
    ll best1 = n, best2 =0;
    ll c = 0;
    while(r != n){
        if(a[r] != 0){b[c].pb(a[r]);}
        else{if(r == 0 || a[r-1] != 0){times[c] = mp(l, n - r);c++; l = r + 1;} l = r + 1;}
        r++;
    }
    if(a[n-1] != 0){times[c] = mp(l, n - r);}
    ll best = 0;
    for(ll i = 0; i < b.size(); i++){
        ll twoc = 0;
        ll negc = 0;
        for(ll j = 0; j < b[i].size(); j++){if(abs(b[i][j]) == 2){twoc++;} if(b[i][j] < 0){negc++;}}
        ll lmult = twoc;
        ll lneg = negc;
        l = 0;
        while(l < b[i].size() && lneg % 2 == 1){if(abs(b[i][l]) == 2){lmult--;} if(b[i][l] < 0){lneg--;} l++;}
        if(lmult > best){
            best = lmult;
            best1 = times[i].first + l;
            best2 = times[i].second;
        }
        r = b[i].size() - 1;
        lmult = twoc;
        lneg = negc;
        ll dif = 0;
        while(r >= 0 && lneg % 2 == 1){if(abs(b[i][r]) == 2){lmult--;} if(b[i][r] < 0){lneg--;} r--; dif++;}
        if(lmult > best){
            best = lmult;
            best1 = times[i].first;
            best2 = times[i].second + dif;
        }
    }
    cout << best1 << " " << best2 << "\n";
}

int main() {
    FAST;
    tc;
}
