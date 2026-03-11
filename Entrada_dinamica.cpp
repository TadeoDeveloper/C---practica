#include <iostream>

int main() {
    int numLoops;
    std::cout << "Enter the number of loops: ";
    std::cin >> numLoops;
    int sum = 0;
    for (int i = 0; i < numLoops; i++) {
        int num;
        std::cin >> num;
        sum += num;
    }
    std::cout << sum;
    return 0;
}