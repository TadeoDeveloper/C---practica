#include <iostream>
#include <string>

class Cat {
  private:
    std::string name;
    bool breed;
    int age;
    bool rescued;
    int mood;
    int hunger;

public:
  Cat() {
    name = "Unnamed";
    breed = false;
    age = 0;
    rescued = true;
    mood = 0;
    hunger = 10;
  }

  Cat(std::string n, bool b, int a, bool r, int m, int h) {
    name = n;
    breed = b;
    age = a;
    rescued = r;
    mood = m;
    hunger = h;
  }

  int setFeed() {
    ++hunger;
    std::cout << "The cat was fed " << hunger << '\n';
    return hunger;
  }

  int setPlay() {
    ++mood;
    std::cout << " The cat is playing " << mood << '\n';
    return mood;
  }

  void status() {
    std::cout << "The cat doesn't has hungry: " << hunger << '\n';
    std::cout << "The cat's mood is: " << mood << " he's bored" << '\n';
  }

};

int main() {
  // Write code here 💖
  std::cout << "***** VIRTUAL PET CAT *****" << '\n';
  Cat cat1("Whiskers", true, 3, false, 5, 8);
  Cat cat2("Mittens", false, 2, true, 7, 6);
  cat1.setFeed();
  cat1.setPlay();
  cat1.status();
  return 0;
}