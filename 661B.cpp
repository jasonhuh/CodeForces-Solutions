#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef long long ll;

ll solve(const int n, const vi& candies, const vi& oranges) {
    int min_candy = *min_element(candies.begin(), candies.end());
    int min_orange = *min_element(oranges.begin(), oranges.end());
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        res += max((candies[i] - min_candy), (oranges[i] - min_orange));
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    int n;
    while (tc--) {
        cin >> n;
        vi candies, oranges;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            candies.push_back(a);
        }
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            oranges.push_back(a);
        }
        cout << solve(n, candies, oranges) << endl;
    }
}
