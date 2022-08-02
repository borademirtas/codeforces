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
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(ll TC, ll TC2){
    ll h, n, ans = 0;
    cin >> h >> n;
    vll a(n);
    vp b(n);
    ll count = 0;
    for(ll i = 0; i < n; i++){cin >> a[i];}
    b[0].first = h;
    for(ll i = 1; i < n; i++){
        if(a[i] != a[i-1] -1){b[count].second = a[i-1]; count++; b[count].first = a[i]; }
    }
    b[count].second = a[a.size()-1];
    while(b[b.size()-1].first == 0){b.pop_back();}
    b.pb(mp(0,0));
    for(ll i = 0; i < b.size() -1; i++){
        if((b[i].first - b[i].second) % 2 == 0 && i != 0) {
            if(b[i].second - b[i+1].first > 1){ans++;}
        }
        if(((b[i].first - b[i].second) % 2 == 1) && i == 0){if(b[i].second - b[i+1].first > 1){ans++;}}
    }
    cout << ans << "\n";
}


int main() {
    FAST;
    tc;
}
