#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;

    vector<pair<int, int>> pairs(n);
    cout << "Enter pairs (x y):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }

    // Use map to store pairs
    unordered_map<int, int> mp;

    cout << "Symmetric pairs are:" << endl;
    for (int i = 0; i < n; i++) {
        int first = pairs[i].first;
        int second = pairs[i].second;

        // Check if reverse pair exists
        if (mp.find(second) != mp.end() && mp[second] == first) {
            cout << "(" << first << ", " << second << ")"
                 << " and "
                 << "(" << second << ", " << first << ")" << endl;
        } else {
            mp[first] = second;
        }
    }

    return 0;
}
