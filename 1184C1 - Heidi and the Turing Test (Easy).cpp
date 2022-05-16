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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

int main() {
    FAST;
    ll n;
    cin >> n;
    vp a(n*4+1);
    for(ll i = 0; i < n * 4 + 1; i++){cin >> a[i].first;  cin >> a[i].second;}
    for(ll x1 = 0; x1 <= 50; x1++){
        for(ll y1 = 0; y1 <= 50; y1++){
            for(ll x2 = x1; x2 <= 50; x2++){
                for(ll y2 = y1; y2 <= 50; y2++){
                    ll count = 0;
                    for(ll i = 0; i < a.size(); i++){
                        if((a[i].second == y2 || a[i].second == y1)  && a[i].first >= x1 && a[i].first <= x2){count++;}
                        else{
                            if((a[i].first == x2 || a[i].first == x1)  && a[i].second >= y1 && a[i].second <= y2){count++;}
                        }
                    }
                    if(count == n *4){
                        for(ll i = 0; i < a.size(); i++){
                            if((a[i].second == y2 || a[i].second == y1)  && a[i].first >= x1 && a[i].first <= x2){count++; continue;}
                            else{
                                if((a[i].first == x2 || a[i].first == x1)  && a[i].second >= y1 && a[i].second <= y2){count++; continue;}
                                cout << a[i].first << " " << a[i].second; return 0;
                            }
                        }
                    }
                }
            }
        }
    }

}
