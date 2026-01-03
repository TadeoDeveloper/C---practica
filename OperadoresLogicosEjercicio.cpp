#include <iostream>
using namespace std;

int main() {
    bool b1 = true;
    bool b2 = true;
    bool b3 = false;

    bool b4 = b1 && b2 && (!b3);
    
    // Don't change the line below
    cout << "b4 = " << b4 << endl;

    return 0;
}