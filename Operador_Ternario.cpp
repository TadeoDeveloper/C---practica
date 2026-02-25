#include <iostream>

int main() {
    int number;
    std::cout << "Ingresa un numero: " << '\n';
    std::cin >> number;
    std::string result = "";
    
    // Write your code below
    result = (number >= 1) ? "positive" : (number < 0) ? "negative" : "zero";
    
    std::cout << "The number is " << result << std::endl;
    return 0;
}