#include <iostream>
using namespace std;

int main() {
    int wind;
    cout << "wind ";
    cin >> wind; // Don't change this line
    string status = "unset";
    
    // Type your code below
    if (wind < 8) {
        status = "calm";
    }
    else if (wind >= 8 && wind <= 31) {
        status = "breeze";
    }
    else if (wind >= 32 && wind <= 63) {
        status = "Gale";
    }
    else
        status = "Storm";
    
    std::cout << "status = " << status;
    return 0; 
}