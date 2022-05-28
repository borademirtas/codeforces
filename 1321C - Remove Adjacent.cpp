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
    #define mp(A, B) make_pair(A, B)
    ll n;
    string s;
     
    ll find(){
        ll best = 0;
        for(ll i = 0; i < s.size(); i++){
            if(i !=0 && s[i] == s[i-1] + 1){best = max(best, s[i] + (ll) 0);}
            if(i != s.size()-1 && s[i] == s[i+1] + 1){best = max(best, s[i] + (ll) 0);}
        }
        return best;
    }
    void del(ll i){
        string ns;
        for(ll j = 0; j < s.size(); j++){
            if(j != i){ns.pb(s[j]);}
        }
        s = ns;
    }
     
    void solve(){
        cin >> n >> s;
        ll total = 0;
        while(true){
            ll target = find();
            if(target == 0){break;}
            for(ll i = 0; i < s.size(); i++){
                if(i !=0 && s[i] == s[i-1] + 1){if(s[i] == target){del(i); total++; break;}}
                if(i != s.size()-1 && s[i] == s[i+1] + 1){if(s[i] == target){del(i); total++; break;}}
            }
        }
        cout << total;
    }
     
    int main() {
        FAST;
        tc1;
    }
