#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int solve(int n, vi& items) {
    sort(items.begin(), items.end());
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (items[i] < 0)
            res += items[i];
    }

    return -1 * res;
}

int main() {
	int m, n; cin >> m >> n;
    vi items;
    int p;
    while (m--) {
        cin >> p;
        items.push_back(p);
    }
    cout << solve(n, items) << endl;
}
