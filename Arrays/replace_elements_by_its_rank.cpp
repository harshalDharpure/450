#include<bits/stdc++.h>
using namespace std;
vector<int> replaceByRank(vector<int>& arr){
    vector<int> sortedArr = arr; 
    sort(sortedArr.begin(), sortedArr.end());
    unordered_map<int, int> rankMap;
    int rank=1;
    for(int num:sortedArr){
        if (rankMap.find(num) == rankMap.end()) {
            rankMap[num] = rank++;
        }
    }

    vector<int> result;
    for (int num : arr) {
        result.push_back(rankMap[num]);
    }
    
    return result;
}
int main() {
    vector<int> arr = {40, 10, 20, 30};
    vector<int> rankedArr = replaceByRank(arr);
    
    cout << "Array replaced by rank: ";
    for (int num : rankedArr) cout << num << " ";
    cout << endl;
    
    return 0;
}
