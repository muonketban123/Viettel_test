#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Check S[0]
bool isValidSequence(const string& s) {
    if (s[0] == '0') {
        return false; 
    }
    return true;
}

//Check 
void processSequence(const string& s) {
    if (!isValidSequence(s)) {
        cout << "NO" << endl;
        return;
    }

    int len = s.length();
    for (int i = 1; i <= len / 2; ++i) {
        string firstPart = s.substr(0, i);
        long long firstNum = stoll(firstPart);

        string currentNum = firstPart;
        long long nextNum = firstNum + 1;

        size_t currentPos = i;
        while (currentPos < len) {
            string nextPart = to_string(nextNum);
            if (s.compare(currentPos, nextPart.length(), nextPart) == 0) {
                currentNum += nextPart;
                nextNum++;
                currentPos += nextPart.length();
            } else {
                break;
            }
        }

        if (currentPos == len) {
            cout << "YES " << firstNum << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int n;
    cout << "Enter the number of input strings: " << endl;
    cin >> n;
    vector<string> sequences(n);
    cout << "Enter input strings: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> sequences[i];
    }
    cout << "Output: " << endl;
    for (int i = 0; i < n; ++i) {
        processSequence(sequences[i]);
    }
    return 0;
}
