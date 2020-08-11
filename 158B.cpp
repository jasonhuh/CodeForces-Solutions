#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int solve(vi nums) {
    vi bucket = {0, 0, 0, 0};
    for (auto num : nums) {
        bucket[num - 1]++;
    }
    int cnt = bucket[3]; bucket[3] = 0; // 4
    int three_one = min(bucket[0], bucket[2]); // 3
    bucket[0] -= three_one; bucket[2] -= three_one;
    cnt += three_one;
    cnt += bucket[2]; // 3
    cnt += ceil(double(bucket[0] + bucket[1]*2) / 4);
    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n; cin >> n;
    vi nums;
    while (n--) {
        int a; cin >> a;
        nums.push_back(a);        
    }
    cout << solve(nums) << endl;
}
