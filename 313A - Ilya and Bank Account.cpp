#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h> 

using namespace std;

int main(){
    long long n, max;
    cin >> n;
    max = n;
    if (n >= 0) { max = n; }
    else {
        if (n / 10 > max) { max = n / 10; }
        if (n % 10 + (n / 100) * 10 > max) { max = n % 10 + (n / 100) * 10; }
    }
    cout << max;
}
