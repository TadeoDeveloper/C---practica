#include <iostream>
#include <string>
using namespace std;


int main()
{
    // variable = (condición) ? valor1 : valor2;
    int score = 75;
    string grade = (score >= 90) ? "A" : (score >= 70) ? "B" : "C";
    cout << grade;

    return 0;
}