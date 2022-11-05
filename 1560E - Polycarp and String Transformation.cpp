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
ll inverse(ll a){ll m = 1e6+3; ll m0 = m; ll y = 0, x = 1;  while (a > 1) { ll q = a / m; ll t = m; m = a % m, a = t; t = y; y = x - q * y; x = t;} if (x < 0){x += m0;}return x;}

string calc(string ans, string pos){
    string s = ans;
    vll used(26);
    for(ll i = 0; i < pos.size(); i++){
        used[pos[i] - 'a']++;
        for(ll j = 0; j < ans.size(); j++){
            if(used[ans[j]-'a'] == 0){s.pb(ans[j]);}
        }
    }
    return s;
}

void solve(ll TC, ll TC2) {
   string s; cin >> s; ll n = s.size();
   string pos; vll used(26);
   for(ll i = n -1 ; i >= 0; i--){
       if(used[s[i]-'a'] == 0){pos.pb(s[i]);}
       used[s[i] -'a']++;
   }
   ll cnt = 0;
   vll need(26);
   for(ll i = 0; i < pos.size(); i++){
       need[pos[i] - 'a'] = (used[pos[i] - 'a'] / (pos.size() - i));
   }
   for(ll i = 0; i < 26; i++){used[i] = 0;}
   string ans;
   for(ll i = 0; i < n; i++){
       if(cnt == pos.size()){break;}
       used[s[i]-'a']++;
       if(used[s[i]-'a'] == need[s[i]-'a']){cnt++;}
       if(used[s[i]-'a'] > need[s[i]-'a'] ){cout << -1 << "\n"; return;}
       ans.pb(s[i]);
   }
   reverse(all(pos));
   if(calc(ans,pos) == s){cout << ans << " " << pos << "\n";}
   else{cout << -1 << "\n";}

}

int main() {
    FAST;
    tc;
}
