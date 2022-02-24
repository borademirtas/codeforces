#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h> 

using namespace std;

int main(){
    long long n, m, dist = 0;
    cin >> n >> m;
    vector<long long> arr(m+1);
    for (long long i = 0; i < m; i++) {
        cin >> arr[i];
    }
    dist += arr[0] - 1;
    for (long long i = 1; i < m; i++) {
        if (arr[i] >= arr[i - 1]) { dist += arr[i] - arr[i - 1]; };
        if (arr[i] < arr[i - 1]) { dist += n - arr[i - 1] + arr[i]; }
    }
    cout << dist;
}
