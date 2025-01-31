#include <iostream>
#include <vector>
using namespace std;

bool Backtrack(vector<int>& decisionVariables, int index) {
    if (index == decisionVariables.size()) {
        return true;
    }

    for (int choice = 1; choice <= 3; choice++) {
        decisionVariables[index] = choice;
        
        if (Backtrack(decisionVariables, index + 1)) {
            return true;
        }

        decisionVariables[index] = 0;  }

    return false;
}

int main() {
    int n = 3;
    vector<int> decisionVariables(n, 0);

    if (Backtrack(decisionVariables, 0)) {
        cout << "Solution found: ";
        for (int num : decisionVariables) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
