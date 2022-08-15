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
     
     
     
     
    void solve(ll TC, ll TC2) {
        ll n;
        cin >> n;
        vector<tri> a(n-2);
        map<ll, vll> b;
        map<pair<ll,ll>, vll> c;
        for(ll i = 0; i < n - 2; i++){
            vll arr(3);
            cin >> arr[0] >> arr[1] >> arr[2];
            sort(all(arr));
            a[i].first = arr[0];
            a[i].second.first = arr[1];
            a[i].second.second = arr[2];
            b[a[i].first].pb(i);
            b[a[i].second.first].pb(i);
            b[a[i].second.second].pb(i);
            c[mp(a[i].first, a[i].second.second)].pb(a[i].second.first);
            c[mp(a[i].second.first, a[i].second.second)].pb(a[i].first);
            c[mp(a[i].first, a[i].second.first)].pb(a[i].second.second);
        }
        vll ans;
        vector<bool> ok(n+1, false);
        for(ll i = 1; i <= n; i++){
            if(b[i].size() == 1){
                ll num = b[i][0];
                ans.pb(i);
                ok[i] =  true;
                if(b[a[num].first].size() == 2){ans.pb(a[num].first); ok[a[num].first] = true;  }
                if(b[a[num].second.first].size() == 2){ans.pb(a[num].second.first); ok[a[num].second.first] = true;  }
                if(b[a[num].second.second].size() == 2){ans.pb(a[num].second.second); ok[a[num].second.second] = true; }
                break;
            }
        }
        while(ans.size() != n){
            ll x = ans[ans.size() - 1];
            ll y = ans[ans.size() - 2];
            if(x > y){swap(x, y);}
            if(c[mp(x,y)].size() == 1){
                ans.pb(c[mp(x,y)][0]);
                ok[c[mp(x,y)][0]] = true;
            }
            else{
                ll x1 = c[mp(x,y)][0];
                ll x2 = c[mp(x,y)][1];
                if(!ok[x1]){ans.pb(x1); ok[x1] = true;}
                else if(!ok[x2]){ans.pb(x2); ok[x2] = true;}
            }
        }
        for(ll i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
    }
     
    int main() {
        FAST;
        tc1;
    }
