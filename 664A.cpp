#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool isPalindrome(int status) {
    int odd = 0;
    odd += (status & (1 << 4)) ? 1 : 0;
    odd += (status & (1 << 3)) ? 1 : 0;
    odd += (status & (1 << 2)) ? 1 : 0;
    odd += (status & (1 << 1)) ? 1 : 0;

    return odd <= 1;
}

string solve() {
    ll r, g, b, w; cin >> r >> g >> b >> w;

    int status = ((r & 1) << 4) | ((g & 1) << 3) | ((b & 1) << 2) |((w & 1) << 1);
    unordered_map<int, bool> seen;
    seen[status] = isPalindrome(status);
    if (seen[status]) {
        return "Yes";
    }

    while (r && g && b) {
        r--;
        g--;
        b--;
        w += 3;

        status = ((r & 1) << 4) | ((g & 1) << 3) | ((b & 1) << 2) |((w & 1) << 1);

        if (seen.count(status)) {
            return seen[status] ? "Yes" : "No";
        }

        seen[status] = isPalindrome(status);
        if (seen[status]) {
            return "Yes";
        }
    }

    return isPalindrome(status) ? "Yes" : "No";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        cout << solve() << endl;
    }
}
