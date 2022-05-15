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

map<char, char> chars;
ll n, k;
string s;
char mn = 'a';

void fix(char c){
    while(k != 0 && chars[c] != 'a'){
        chars[c]--;
        k--;
        for(ll i = 'y'; i >= 'a'; i--){
            if(chars[i] > chars[i + 1]){chars[i] = chars[i+1];}
        }
    }
}

void solve(){
    cin >> n >> k >> s;
    mn = 'a';
    for(ll i = 'a'; i <= 'z'; i++){
        chars[i] = i;
    }
    for(ll i = 0; i < n; i++){
        if(s[i] - 'a' <= k){mn = max(s[i] ,  mn);}
        else if(i != 0){fix(mn); fix(s[i]); mn = 'a'; break;}
        else if(i == 0){fix(s[i]); mn = 'a';}
        else{continue;}
    }
    if(k != 0){
        for(ll i = 0; i < n; i++){
            cout << 'a';
        }
        cout << "\n"; return;
    }
    for(ll i = 0; i < n; i++){
        cout << chars[s[i]];
    }
    cout << "\n";

}

int main() {
    tc;
}
