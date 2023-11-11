#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countStepsToPalindrome(const string& s) {
    int steps = 0;
    int n = s.length();

    for (int i = 0; i < n / 2; ++i) {
        int distance = abs(s[i] - s[n - 1 - i]);
        steps += min(distance, 26 - distance);
    }

    return steps;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);  

    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    for (int i = 0; i < n; ++i) {
        int steps = countStepsToPalindrome(strings[i]);
        cout << steps << endl;
    }

    return 0;
}
