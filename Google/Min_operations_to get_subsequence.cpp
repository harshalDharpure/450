#include<bits/stdc++.h>
#define int long long int
using namespace std;

int minOperations(vector<int>& target, vector<int>& arr) {
    unordered_map<int, int> pos;
    for (int i = 0; i < target.size(); ++i) {
        pos[target[i]] = i;
    }
    
    vector<int> lis;
    for (int num : arr) {
        if (pos.count(num)) {
            int idx = pos[num];
            auto it = lower_bound(lis.begin(), lis.end(), idx);
            if (it == lis.end()) {
                lis.push_back(idx);
            } else {
                *it = idx;
            }
        }
    }
    
    // Return both insertions needed and LIS length
    cout << (target.size() - lis.size()) << endl; // Number of insertions
    cout << target.size() << endl; // Final subsequence length after inserting
    return 0;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n, m;
    cin >> n;
    vector<int> target(n);
    for(int i = 0; i < n; i++) {
        cin >> target[i];
    }

    cin >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    minOperations(target, arr);

    return 0;   
}
