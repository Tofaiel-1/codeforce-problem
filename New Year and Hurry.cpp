// Tofaiel_1
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int totalTimeAvailable = 240 - k; // Total minutes Limak has to solve problems
    int timeUsed = 0;
    int problemsSolved = 0;

    for (int i = 1; i <= n; ++i) {
        timeUsed += 5 * i; // Time for the i-th problem
        if (timeUsed <= totalTimeAvailable) {
            problemsSolved++;
        } else {
            break; // No more time left
        }
    }

    cout << problemsSolved << endl;
    return 0;
}

