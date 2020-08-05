#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

string solve(int n, vi arr) {
    unordered_set<int> num_set(arr.begin(), arr.end());
    vi arr2(num_set.begin(), num_set.end());
    sort(arr2.begin(), arr2.end());
    while (arr2.size() >= 2) {
        bool removed = false;
        for (int i = 0; i < arr2.size() - 1; ++i) {
            if (arr2[i + 1] - arr2[i] == 1 || arr2[i] == arr2[i + 1]) {
                removed = true;
                arr2.erase(arr2.begin() + i);
                break;
            }
        }

        if (!removed) break;
    }
    return arr2.size() == 1 ? "YES" : "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int tc; cin >> tc;
    int n;
    while (tc--) {
        cin >> n;
        vi arr;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            arr.push_back(a);
        }
        cout << solve(n, arr) << endl;
    }
}
