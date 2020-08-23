#include <bits/stdc++.h>

using namespace std;

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;

string solve() {
    int n, a; cin >> n;
    map<ll, ll> freq;
    rep(i, n) {
        cin >> a;
        freq[a]++;
    }

    if (freq.size() == 1) {
        ll cnt = freq.begin()->second * (freq.begin()->second - 1) / 2;
        return to_string(0) + " " + to_string(cnt);
    }

    ll diff = freq.rbegin()->first - freq.begin()->first;
    ll cnt = freq.rbegin()->second * freq.begin()->second;
    
    return to_string(diff) + " " + to_string(cnt);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cout << solve() << endl;
}
