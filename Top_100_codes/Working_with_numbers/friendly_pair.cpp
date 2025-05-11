#include <bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

// Function to calculate the sum of all divisors (including the number)
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}

// Function to check whether two numbers are friendly pairs
bool isFriendlyPair(int a, int b) {
    int sum1 = sumOfDivisors(a);
    int sum2 = sumOfDivisors(b);

    // Check abundancy index equality with 1LL to avoid overflow
    return (sum1 * 1LL * b == sum2 * 1LL * a);
}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    if (isFriendlyPair(a, b)) {
        cout << "These are Friendly Pair";
    } else {
        cout << "These are NOT Friendly Pair";
    }

    return 0;
}
