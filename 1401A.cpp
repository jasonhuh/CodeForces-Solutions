#include <bits/stdc++.h>

using namespace std;

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;

int solve() {
    int n, k; cin >> n >> k;
    if (k > n) {
        return k - n;
    } else if ((n - k) % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    vector<ll> res;
    while (tc--) {
        res.push_back(solve());
    }
    for (auto num : res) {
        cout << num << "\n";
    }
}
