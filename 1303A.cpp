#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int solve(int n) {
    return n * n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    int n;
    while (tc--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}
