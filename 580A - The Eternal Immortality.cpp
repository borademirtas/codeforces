    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        long long b; long long a; long long n = 0; cin >> b >> a;
        if (a - b >= 5) { n = 0; }
        else {
                
                a = a % 10 + 10;
                b = b % 10 + 10;
                if (a - b == 1) { n = a; }
                if (a - b == 2) { n = a * (a - 1); }
                if (a - b == 3) { n = a * (a - 1) * (a - 2); }
                if (a - b == 4) { n = a * (a - 1) * (a - 2) * (a - 3); }
                if (a % 10 == 0) { n = 0; }
                if (a - b == 0) { n = 1; }
        }
        cout << n  % 10;
    }
