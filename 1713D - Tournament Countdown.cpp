#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define  vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define vll2 vector<vector<ll>> dp(n, vector<ll>(m));
#define FIXED(A) cout << fixed; cout.precision(20); cout << A << "\n";
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
struct tri{ll x = 0, y = 0, z = 0;};
template <typename num_t>
using ordered_set = tree<num_t, null_type, less_equal<num_t>, rb_tree_tag, tree_order_statistics_node_update>;
void setIO(string name) {freopen((name+".in").c_str(),"r",stdin);freopen((name+".out").c_str(),"w",stdout);}
ll rd(ll a, ll b){return (a+b-1) / b;}
ll isqrt(ll x){ll ans = 0; for(ll k = 1LL << 30; k != 0; k /= 2){if ((ans + k) * (ans + k) <= x) {ans += k;} } return ans;   }
vll prime(ll x){ll n = x; vll ans; while (n % 2 == 0) {ans.pb(2);n = n/2;} for (int i = 3; i <= sqrt(n); i = i + 2) {while (n % i == 0){ans.pb(i);n = n/i;}}if (n > 2){ans.pb(n);} return ans;}
ll binpow(ll a, ll b, ll m) { a %= m; ll res = 1; while (b > 0) { if (b & 1){res = res * a % m;}a = a * a % m; b >>= 1;} return res;}
ll lg2(ll n){ll cnt=0;while(n){cnt++;n/=2;}return cnt;}

ll ask(vll n)
{
    cout << "? " << n[0] << ' ' << n[2] << endl;
    ll x; cin >> x;
    if (x == 1){
        cout << "? " << n[0] << ' ' << n[3] << endl;
        cin >> x;
        if (x == 1){ return n[0];}
        return n[3];
    }
    else if (x == 2)
    {
        cout << "? " << n[1] << ' ' << n[2] << endl;
        cin >> x;
        if (x == 1){ return n[1];}
        return n[2];
    }
    else
    {
        cout << "? " << n[1] << ' ' << n[3] << endl;
        cin >> x;
        if (x == 1){return n[1];} 
        return n[3];
    }
}

void solve(ll TC, ll TC2) {
    ll n;
    cin >> n;
    vector<ll> a, b;
    for (ll i = 1; i <= (1LL << n); i++)
    {
        a.push_back(i);
    }
    while (a.size() > 2)
    {
        while (!a.empty())
        {
            vll x(4);
            x[0] = a.back();
            a.pop_back();
            x[1] = a.back();
            a.pop_back();
            x[2] = a.back();
            a.pop_back();
            x[3] = a.back();
            a.pop_back();
            ll win = ask(x);
            b.push_back(win);
        }
        a = b;
        b.clear();
    }
    if (a.size() == 2)
    {
        cout << "? " << a[0] << ' ' << a[1] << endl;
        ll x;
        cin >> x;
        if (x == 2){a[0] = a[1];}
    }
    cout << "! " << a[0] << endl;
}

int main() {
    FAST;
    tc;
}
