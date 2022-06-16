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
    string s1, s2;
    cin >> s1 >> s2;
    ll ans = 1;
    vector<set<ll>> a(26);
    for(ll i = 0; i < s1.size(); i++){
        a[s1[i] - 'a'].insert(i+1);
    }
    ll pos = 0;
    for(ll i = 0; i < s2.size(); i++){
        if(a[s2[i] - 'a'].empty()){cout << -1 << "\n"; return;}
        if(a[s2[i] - 'a'].end() == a[s2[i] - 'a'].upper_bound(pos)){pos = 0; ans++; i--; continue;}
        pos = *a[s2[i] - 'a'].upper_bound(pos);
    }
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
