#include <iostream>

int main() {
    int a = 11;
    int b = 11;
    
    // Don't change below this line
    int c = 0;
    if (a >= b && !(b < 10)) {
        c = 2;
    }
    
    c += 1;
    std::cout << "c = " << c;
    return 0; 
}