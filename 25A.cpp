#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int solve() {
    int n, a; cin >> n;
    int even = 0, odd = 0;
    int even_idx = -1, odd_idx = -1;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        if (a & 1) {
            odd++;
            if (odd_idx == -1) odd_idx = i;
        } else {
            even++;
            if (even_idx == -1) even_idx = i;
        }
    }

    if (odd == 1) {
        return odd_idx;
    } else if (even == 1) {
        return even_idx;
    }

    assert(false);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cout << solve() << endl;
}
