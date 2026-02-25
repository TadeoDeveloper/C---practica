#include <iostream>
using namespace std;

int main() {
    int age, height;
    bool hasAdult;

    cout << "Pon tu edad, tu altura y si estas con un  adulto: ";
    cin >> age >> height >> hasAdult;

    if (age <= 12)
    {
        cout << "Sorry, you are too young";
    }
    else if (height < 150)
          {
            std::cout << "Sorry, you are not tall enough";
          }
    else if (age > 12 && height > 150)
    {
          if (age < 15 && hasAdult == false)
          {
            cout << "Sorry, you need an adult with you";
          }
          if (age < 15 && hasAdult == true)
          {
            cout << "You can ride with adult supervision!";
          }
           if (age >= 15 && height > 150)
          {
            cout << "You can ride by yourself!";
          }
    }    
    
    return 0;
}