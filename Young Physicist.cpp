    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
        long long n, x, y, z, sum1 = 0, sum2 = 0, sum3 = 0;
        cin >> n;
        while (n--) {
            cin >> x >> y >> z;
            sum1 += x;
            sum2 += y;
            sum3 += z;
        }
        if (sum1 == 0 && sum2 == 0 && sum3 == 0) {
            cout << "YES";
        }
        else { cout << "NO"; }
    }
