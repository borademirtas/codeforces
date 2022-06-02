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
#define all(x) (x).begin(), (x).end()

ll n, m;
ll xp, yp;
vector<string> s;
vector<pair<ll, ll>> pos;
map<pair<ll,ll>, ll> b;

void mapcheck(ll x, ll y){
    for(ll i = x; i >= 0; i--){
        if(s[i][y] == '*'){break;}
        else{
            b[mp(i, y)]++;
        }
    }
    for(ll i = x + 1; i < n; i++){
        if(s[i][y] == '*'){break;}
        else{
            b[mp(i, y)]++;
        }
    }
    for(ll i = y; i >= 0; i--){
        if(s[x][i] == '*'){break;}
        else{
            b[mp(x, i)]++;
        }
    }
    for(ll i = y + 1; i < m; i++){
        if(s[x][i] == '*'){break;}
        else{
            b[mp(x, i)]++;
        }
    }
}

void check(ll x, ll y){
    for(ll i = x; i >= 0; i--){
        if(s[i][y] == '*'){break;}
        else{
            pos.pb(mp(i, y));
        }
    }
    for(ll i = x + 1; i < n; i++){
        if(s[i][y] == '*'){break;}
        else{
            pos.pb(mp(i, y));
        }
    }
    for(ll i = y; i >= 0; i--){
        if(s[x][i] == '*'){break;}
        else{
            pos.pb(mp(x, i));
        }
    }
    for(ll i = y + 1; i < m; i++){
        if(s[x][i] == '*'){break;}
        else{
            pos.pb(mp(x, i));
        }
    }
}

void solve() {
    cin >> n >> m;
    s.resize(n);
    for(ll i = 0; i < n; i++){
        cin >> s[i];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(s[i][j] == 'S'){xp = i; yp = j;}
        }
    }
    check(xp, yp);
    ll c = pos.size();
    for(ll i = 0; i < c; i++){
        check(pos[i].first, pos[i].second);
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(s[i][j] == 'T'){xp = i; yp = j;}
        }
    }
    mapcheck(xp, yp);
    for(ll i = 0; i < pos.size(); i++){
        if(b[mp(pos[i].first, pos[i].second)] > 0){cout << "YES"; return;}
    }
    cout << "NO";
}

int main() {
    FAST;
    tc1;
}
