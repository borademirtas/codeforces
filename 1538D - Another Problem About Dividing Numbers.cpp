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

ll cnt = 0;
vll primes;

void sieve(ll n){
    vector<bool> prime(n+1, true);
    for(ll i = 2; i * i <= n; i++){
        if(prime[i]){
            for(ll j = i * i; j <= n; j += i){prime[j] = false;}
        }
    }
    for(ll i = 2; i <= n; i++){
        if(prime[i]){primes.pb(i);}
    }
}

ll check(ll x){
    ll num = x;
    ll ans = 0;
    for(ll i = 0; i < primes.size(); i++){
        while(x % primes[i] == 0){x /= primes[i]; ans++;}
    }
    if(x != 1){ans++;}
    return ans;
}

void solve(ll TC, ll TC2){
    cnt = 0;
    ll a, b, k;
    cin >> a >> b >>  k;
    cnt += check(a); cnt += check(b);
    ll mn = 2;
    if(gcd(a,b) == a || gcd(a,b) == b){mn = 1;}
    if(a == b){mn = 0;}
    if(k >= mn && k <= cnt && k == 1 && mn == 1){cout << "YES\n";}
    else if(k >= mn && k <= cnt && k != 1){cout << "YES\n";}
    else{cout << "NO\n";}
}


int main() {
    FAST;
    sieve(sqrt(1e9) + 1);
    tc;
}
