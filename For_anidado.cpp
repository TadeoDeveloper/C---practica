#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i + j == n) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }
    return 0;
}