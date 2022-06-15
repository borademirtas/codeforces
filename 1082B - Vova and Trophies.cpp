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
    ll n;
    string s;
    ll best = 0;
    ll gc = 0;
    cin >> n >> s;
    for(ll i = 0; i < n; i++){if(s[i] == 'G'){gc++;}}
    vll b;
    b.pb(0);
    if(s[0] == 'G'){b[0]++;}
    else{b[0]--;}
    for(ll i = 1; i < n; i++){
        if(b[b.size() - 1] > 0){
            if(s[i] == 'G'){b[b.size() - 1]++;}
            else{b.pb(-1);}
            continue;
        }
        if(b[b.size() - 1] < 0){
            if(s[i] == 'S'){b[b.size() - 1]--;}
            else{b.pb(1);}
        }
    }
    for(ll i = 0; i < b.size(); i++){
        if(b[i] > 0){
            if(b[i] != gc){best = max(b[i] + 1, best);}
            else{best = max(b[i], best);}
        }
    }
    for(ll i = 2; i < b.size(); i++){
        if(b[i] > 0 && b[i-1] == -1 && b[i-2] > 0){
            if(b[i] + b[i-2] == gc){best = max(best, b[i] + b[i-2]);}
            else{best = max(best, b[i] + b[i-2] + 1);}
        }
    }
    cout << best;
}

int main() {
    FAST;
    tc1;
}
