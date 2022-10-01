#include "iostream"

int main() {
  int a;
  std::cin >> a;
  switch (a) {
    case 1: std::cout << "пики" << '\n'; break;
    case 2: std::cout << "грефы" << '\n'; break;
    case 3: std::cout << "бубны" << '\n'; break;
    case 4: std::cout << "черви" << '\n'; break;
    default: std::cout << "Что-то не то."<< '\n'; break;
  }
}
