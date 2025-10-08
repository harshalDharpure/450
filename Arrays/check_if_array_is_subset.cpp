#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& A, vector<int>& B) {
    // Store all elements of B in a set
    unordered_set<int> s(B.begin(), B.end());

    // Check if every element of A exists in B
    for (int x : A) {
        if (s.find(x) == s.end()) {
            return false;  // Element missing
        }
    }
    return true;
}

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    if (isSubset(arr1, arr2))
        cout << "First array is a subset of second array." << endl;
    else
        cout << "First array is NOT a subset of second array." << endl;

    return 0;
}
