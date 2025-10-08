#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> sortByAnotherArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> orderMap;
    
    // Map each element of arr2 to its index
    for (int i = 0; i < arr2.size(); i++) {
        orderMap[arr2[i]] = i;
    }
    
    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        bool inA = orderMap.find(a) != orderMap.end();
        bool inB = orderMap.find(b) != orderMap.end();
        if (inA && inB) return orderMap[a] < orderMap[b];  // Both in arr2
        if (inA) return true;                               // Only a in arr2
        if (inB) return false;                              // Only b in arr2
        return a < b;                                       // Neither in arr2 → ascending
    });
    
    return arr1;
}

int main() {
    vector<int> arr1 = {5, 3, 9, 1, 3};
    vector<int> arr2 = {3, 1, 5};
    
    vector<int> sortedArr = sortByAnotherArray(arr1, arr2);
    
    cout << "Sorted array: ";
    for (int num : sortedArr) cout << num << " ";
    cout << endl;
    
    return 0;
}
