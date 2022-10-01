#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a, b, c, min_number = 0;
  std::cout << "Введите колличество конфет 3х видов" << '\n';
  std::cin >> a >> b >> c;
  int minint = min(a, min(b, c)); // Нахождение минимума

  std::cout << "Колличество мешочков: "<< minint << '\n';
  std::cout << "Заберут конфет: " << (a + b + c) - (minint + minint + minint)<< '\n';

}
