#include <bits/stdc++.h>

using namespace std;

int solve(int x) {
    return ceil(double(x) / 5);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n; cin >> n;        
    cout << solve(n) << endl;    
}
