#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h> 

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (long long i = 0; i < n -1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size() - 1];
}
