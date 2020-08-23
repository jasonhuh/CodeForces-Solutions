#include <bits/stdc++.h>

using namespace std;

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;

ll solve() {
    int n; cin >> n;
    string s; cin >> s;

    ll res = 0;
    int k = 0;
    unordered_map<int, int> seen;
    ll run_sum = 0;
    for (char c : s) {
        run_sum += ((c - '0') - 1);

        if (run_sum == k) res++;

        if (seen.count(run_sum - k)) {
            res += seen[run_sum - k];
        }
        seen[run_sum]++;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    vector<ll> vll;
    while (tc--) {
        vll.push_back(solve());
    }
    for (auto ans : vll)
	    cout << ans << endl;
}
