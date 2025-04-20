#include<bits/stdc++.h>
#define int long long int
using namespace std;

int fastPower(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base; // If exponent is odd, multiply base once
        }
        base *= base; // Square the base
        exponent /= 2; // Half the exponent
    }
    return result;
}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int base, exponent;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;

    int power = fastPower(base, exponent);

    cout << "Power = " << power << endl;

    return 0;
}
