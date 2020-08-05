#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n, k; cin >> n >> k;
    cout << solve(n, k) << endl;
}
