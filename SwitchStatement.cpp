#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;
    
    // Switch case para evaluar la temporada segun el mes 
    switch (month) 
    {
        case 1:
        case 2:
        case 12:
            cout << "Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout << "Autumn";
            break;
        default:
            cout << "Invalid month";
    }
}