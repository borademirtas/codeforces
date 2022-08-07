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

string s1, s2;
bool check(ll m){
    ll r = s2.size() - 1, l = 0;
    deque<ll> q;
    bool ok = false;
    for(ll i = s1.size() - 1; i >= m; i--){
        if(r >= 0 && s1[i] == s2[r]){r--; q.push_front(i);}
    }
    if(r < l){ok = true;}
    ll l2 = 0;
    for(ll r2 = m;  r2 < s1.size();){
        if(l < s2.size() && s1[l2] == s2[l]){l++;}
        if(!q.empty() && q.front() == r2){q.pop_front(); r++;}
        l2++; r2++;
        if(r < l){ok = true;}
    }
    return ok;
}

void solve(ll TC, ll TC2){
    cin >> s1 >> s2;
    ll l = 0, r = s1.size() + 1;
    while(r - l > 1){
        ll m = (l+r) / 2;
        bool ok = check(m);
        if(ok){l = m;}
        else{r = m;}
    }
    cout << l;
}

int main() {
    FAST;
    tc1;
}
