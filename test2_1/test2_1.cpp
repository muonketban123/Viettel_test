#include <iostream>
#include <vector>
using namespace std;

int main() {
    //ENTER THE INPUT:
    cout << "Enter the number of elements in the sequence S: ";
    int n;
    cin >> n;
    
    vector<int> S(n);
    cout << "Enter the elements of the sequence S: " << endl;
    for(int i = 0; i < n; i++) {
        cout << "S[" << i+1 << "]:";
        cin >> S[i];
    }
    
    //CALCULATING THE OUTPUT
    int result = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(S[j] <= S[i]) {
                sum++;
            }
        }
        result += sum;
    }
    
    cout << "Cumulative total is " << result << endl;
    
}