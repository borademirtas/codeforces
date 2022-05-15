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
    #define PB push_back
    #define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
    #define vp vector<pair<ll,ll>>
    #define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
    #define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    #define mpll map<ll,ll>
    #define cout std::cout
    #define vll2 vector<vector<ll>> a(n, vector<ll>(m));
    #define FIXED(A) cout << std::fixed << A << std::endl;
     
     
    int main() {
        FAST;
        set<ll> h1;
        set<ll> w1;
        multiset<ll> h2;
        multiset<ll> w2;
        ll w, h, n;
        cin >> w >> h >> n;
        h1.insert(0);
        h1.insert(h);
        h2.insert(h);
        w1.insert(0);
        w1.insert(w);
        w2.insert(w);
        ll size = w *h;
        for(ll i = 0; i < n; i++){
            char c;
            ll x;
            cin >> c >> x;
            if(c == 'H'){
                auto it = h1.upper_bound(x);
                ll num = *--it;
                *++it;
                h2.erase(h2.lower_bound(*it - num));
                h1.insert(x);
                it = h1.lower_bound(x);
                num = *it;
                ll num2 = *++it;
                *--it;
                ll num3 = *--it;
                h2.insert(num - num3);
                h2.insert(num2 - num);
            }
            if(c == 'V'){
                auto it = w1.upper_bound(x);
                ll num = *--it;
                *++it;
                w2.erase(w2.lower_bound(*it - num));
                w1.insert(x);
                it = w1.lower_bound(x);
                num = *it;
                ll num2 = *++it;
                *--it;
                ll num3 = *--it;
                w2.insert(num - num3);
                w2.insert(num2 - num);
            }
            cout << *h2.rbegin() * *w2.rbegin() << "\n";
        }
    }
