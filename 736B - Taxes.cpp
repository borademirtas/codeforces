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
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()

bool check(ll x){
    for(ll i = 2; i <= sqrt(x); i++){
        if(x % i == 0){return false;}
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    if(check(n) || n == 2){cout << 1 << "\n"; return;}
    if(n % 2 == 0){cout << 2 << "\n"; return;}
    if(n % 2 == 1 && check(n-2)){cout << 2 << "\n"; return;}
    cout << 3 << "\n";
}

int main() {
    FAST;
    tc1;
}
