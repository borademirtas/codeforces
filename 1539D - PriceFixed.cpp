    #include <iostream>
    #include <vector>
    #include <cstdio>
    #include <algorithm>
    #include <fstream>
    #include <string>
    #include <cctype>
    #include <map>
    #include <cmath>
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
    #define mp(A, B) make_pair[A, B]
     
    void solve() {
        ll n;
        cin >> n;
        vp a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i].second >> a[i].first;
        }
        ll l = 0,  r = n - 1;
        sort(a.begin(), a.end());
        ll total = 0;
        ll count = 0;
        while(l <= r){
            if(count < a[l].first){
                ll dif = min(a[l].first - count, a[r].second);
                total += dif * 2;
                count += dif;
                a[r].second -= dif;
                if(a[r].second == 0){r--;}
            }
            if(count >= a[l].first){
                total += a[l].second;
                count += a[l].second;
                l++;
            };
        }
        cout << total;
    }
     
    int main() {
        FAST;
        tc1;
    }
