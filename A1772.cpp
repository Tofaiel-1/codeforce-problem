#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        char a, plus, b;
        std::cin >> a >> plus >> b;
        std::cout << (a - '0') + (b - '0') << '\n';
    }

    return 0;
}
