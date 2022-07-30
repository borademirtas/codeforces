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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
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

void solve(){
    ll n; string s;
    cin >> n >> s;
    ll zc = 0, oc = 0;
    for(ll i = 0; i < n; i++){ if(s[i] == '0'){zc++;} else{oc++;}}
    if(s[0] == '0' || s[n-1] == '0' || zc % 2 == 1){cout << "NO\n"; return;}
    cout << "YES\n";
    string a, b;
    ll used = 0;
    bool ok = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            a.push_back(2 * used < oc ? '(' : ')');
            b.push_back(a.back());
            used++;
        }
        else {
            a.push_back(ok ? '(' : ')');
            b.push_back(ok ? ')' : '(');
            if(ok){ok = false;}
            else{ok = true;}
        }
    }
    cout << a << "\n" << b << "\n";
}


int main() {
    FAST;
    tc;
}
