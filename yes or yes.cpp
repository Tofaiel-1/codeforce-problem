//Tofaiel_1
// this code is simple
#include <iostream>
#include <string>
#include <algorithm> // for transform
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // change string in a small char
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "yes") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
