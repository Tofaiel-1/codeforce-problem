//Tofaiel_1
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ticket;
        cin >> ticket;

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < 3; ++i)
            sum1 += ticket[i] - '0';

        for (int i = 3; i < 6; ++i)
            sum2 += ticket[i] - '0';

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
