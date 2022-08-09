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

ll n;
vll a;
vll ok;


ll check(ll x, ll num){
    ll m = 0;
    ll old = a[x];
    if(num == 0){
        a[x] = a[x-1];
        for(ll i = x- 1; i <= x + 1; i++){
            if(i == 0 || i == n -1){continue;}
            if(ok[i] == 1){m--;}
            if(a[i] > a[i-1] && a[i] > a[i+1]){m++;}
            if(a[i] < a[i-1] && a[i] < a[i+1]){m++;}
        }
    }
    if(num == 1){
        a[x] = a[x+1];
        for(ll i = x- 1; i <= x + 1; i++){
            if(i == 0 || i == n -1){continue;}
            if(ok[i] == 1){m--;}
            if(a[i] > a[i-1] && a[i] > a[i+1]){m++;}
            if(a[i] < a[i-1] && a[i] < a[i+1]){m++;}
        }
    }
    a[x] = old;
    return m;
}

void solve(ll TC, ll TC2){
    a.clear();
    ok.clear();
    cin >> n;
    a.resize(n);
    ok.resize(n);
    for(ll i = 0; i < n; i++){cin >> a[i];}
    ll cnt = 0;
    for(ll i = 1; i < n - 1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){cnt++; ok[i]++; }
        if(a[i] < a[i-1] && a[i] < a[i+1]){cnt++; ok[i]++;}
    }
    ll best = 0;
    for(ll i = 1; i < n - 1; i++){
        best = min(best, check(i, 0));
        best = min(best, check(i, 1));
    }
    cout << cnt + best << "\n";
}

int main() {
    FAST;
    tc;
}
