#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int twoSum(int target, vi v) {
    unordered_map<int, int> seen;
    int cnt = 0;
    for (auto num : v) {
        if (seen.find(target - num) != seen.end()) {
            cnt += 1;
            seen[target - num]--;
            if (seen[target - num] == 0) {
                seen.erase(target - num);
            }
        } else {
            seen[num]++;
        }
    }

    return cnt;
}

int solve(int n, vi v) {
    int max_cnt = 0;
    for (int t = 1; t <= 2 * n; ++t) {
        max_cnt = max(max_cnt, twoSum(t, v));
    }

    return max_cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    int n, a;
    while (tc--) {
        cin >> n;
        vi v;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            v.push_back(a);
        }
        cout << solve(n, v) << endl;
    }
}
