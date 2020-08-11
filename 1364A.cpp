#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int solve(int n) {
    int sum;
    int left, right;

    sum += a;
    if (a % x != 0) {
        if (left == -1)
            left = i;
        right = i;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    int n, x, a;
    while (tc--) {
        cin >> n >> x;
        vi v1;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            v1.emplace_back(a);
        }
        cout << solve(n, v1) << endl;
    }
}
