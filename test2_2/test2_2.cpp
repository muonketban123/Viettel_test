#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: " << endl;
    cin >> n;
    
    vector<int> scores(n);
    vector<int> higher_count(n);

    // Enter each student's score
    cout << "Enter each student's score: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    // Enter the number of students in front with higher scores
    cout << "Enter the number of students in front with higher scores: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> higher_count[i];
    }

    vector<int> result(n);

    // Determine the arrangement position of each student
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (count == higher_count[i] && result[j] == 0) {
                result[j] = scores[i];
                break;
            }
            if (result[j] == 0 || result[j] > scores[i]) {
                count++;
            }
        }
    }

    // Print out the students' scores according to the sorted position
    cout << "Output: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
