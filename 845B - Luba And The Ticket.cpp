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
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

string s;

bool check(ll i, ll j, ll a, ll b, ll c, ll d){
    ll s1 = i + j + a;
    ll s2 = b + c + d;
    if(s1 == s2){return true;}
    else{return false;}
}

ll checkdif(ll i, ll j, ll a, ll b, ll c, ll d){
    ll x = 6;
    if(s[0] - '0' == i){x--;}
    if(s[1] - '0' == j){x--;}
    if(s[2] - '0' == a){x--;}
    if(s[3] - '0' == b){x--;}
    if(s[4] - '0' == c){x--;}
    if(s[5] - '0' == d){x--;}
    return x;
}

void solve(ll TC, ll TC2) {
    cin >> s;
    ll ans = 6;
    for(ll i = 0; i < 10; i++){
        for(ll j = 0; j < 10; j++){
            for(ll a = 0; a < 10; a++){
                for(ll b = 0; b < 10; b++){
                    for(ll c = 0; c < 10; c++){
                        for(ll d = 0; d < 10; d++){
                            bool ok = check(i, j, a, b, c, d);
                            ll x = checkdif(i, j, a, b, c, d);
                            if(ok){ans = min(ans, x);}
                        }
                    }
                }
            }
        }
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
