#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void generate_lucky_numbers(int num, vi& lucky_numbers) {
    if (num > 1000) return;
    lucky_numbers.push_back(num);
    generate_lucky_numbers(num * 10 + 4, lucky_numbers);
    generate_lucky_numbers(num * 10 + 7, lucky_numbers);
}

string solve(int num) {
    if (num < 4) return "NO";
    vi lucky_numbers;
    generate_lucky_numbers(4, lucky_numbers);
    generate_lucky_numbers(7, lucky_numbers);    
    for (vi::iterator it = lucky_numbers.begin(); it < lucky_numbers.end(); ++it) {
        int lucky_num = *it;
        if (lucky_num > num) continue;
        if (num % lucky_num == 0) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
	int num; cin >> num;
    cout << solve(num) << endl;
}
