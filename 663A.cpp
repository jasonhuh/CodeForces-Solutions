#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string solve(int tc) {
    int n; cin >> n;
    vi nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }
    next_permutation(nums.begin(), nums.end());

    stringstream ss;
    for (int i = 0; i < nums.size(); ++i) {
        ss << nums[i];
        if (i < nums.size() - 1) ss << " ";
    }

    return ss.str();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    for (int i = 0; i < tc; ++i) {
        cout << solve(i) << endl;
    }
}
