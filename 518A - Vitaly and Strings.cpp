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


void solve(){
    string s1, s2, ans;
    cin >> s1 >> s2;
    ans = s2;
    for(ll i = 0; i < s1.size(); i++){
        for(ll j = 'a'; j <= 'z'; j++){
            string ns = ans;
            ns[i] = j;
            if(ns < s2 && ns > s1){cout << ns; return;}
        }
    }
    ans = s1;
    for(ll i = 0; i < s1.size(); i++){
        for(ll j = 'a'; j <= 'z'; j++){
            string ns = ans;
            ns[i] = j;
            if(ns < s2 && ns > s1){cout << ns; return;}
        }
    }
    cout << "No such string\n";
}

int main() {
    FAST;
    tc1;
}
