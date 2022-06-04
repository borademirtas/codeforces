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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()

ll n, k;
string s;
string b = "RGB";

ll check(ll imbal){
    ll r = k;
    ll total = 0;
    vector<bool> no(n, false);
    for(ll i = 0; i < k; i++){
        if(s[i] != b[imbal]){total++; no[i] = true;}
        imbal++;
        imbal %= 3;
    }
    ll l = 0;
    ll best = total;
    while(r != n){
        if(s[r] != b[imbal]){total++; no[r] = true;}
        if(no[l]){total--;}
        r++; l++;
        imbal++;
        imbal %= 3;
        best = min(best, total);
    }
    return best;
}

void solve(){
    cin >> n >> k >> s;
    ll ans = min({check(0), check(1), check(2)});
    cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
