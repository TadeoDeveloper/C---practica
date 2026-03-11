#include <iostream>

double bigger(double arg1, double arg2) {
    // Complete the function
    int max;
    if (arg1 > arg2)
    {
        return max = arg1;
    }
    else if (arg1 == arg2)
    {
        return arg1;
    }
    else
    {
        return max = arg2;
    }
}

int main() {
    int iterations;
    double num1, num2;
    std::cin >> iterations >> num1 >> num2;

    for (int i = 0; i < iterations; i++) {
        // Write your code below
        bigger(num1, num2);
    }
    return 0;
}