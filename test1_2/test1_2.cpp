#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countStepsToPalindrome(const string& s) {
    int steps = 0;
    int n = s.length();

    for (int i = 0; i < n / 2; ++i) {
        int distance = abs(s[i] - s[n - 1 - i]);
        steps += distance;
    }

    return steps;
}

int main() {
    int n;
    cout << "Enter the number of input strings: " << endl;
    cin >> n;

    vector<string> strings(n);  
    
    cout << "Enter input strings " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }
    
    cout << "Out put: " << endl;
    for (int i = 0; i < n; ++i) {
        int steps = countStepsToPalindrome(strings[i]);
        cout << steps << endl;
    }

    return 0;
}
