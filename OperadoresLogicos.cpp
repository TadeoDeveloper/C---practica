#include <iostream>
using namespace std;

int main() {
    int b1 = 3;
    int b2 = 2;
    bool b3 = !((b1 + b2) > (b1 * b2));
    
    // Don't change the line below
    cout << "b3 = " << b3 << endl;

    return 0;
}