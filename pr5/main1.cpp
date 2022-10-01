#include <iostream>
#include <string>
int main() {
  std::cout << "/* Колличество дней: */" << '\n';
  int a;
  std::cin >> a;
  // string arr31[] = {"Январь", "Март", "Май", "Июль" ,"Август", "Октябрь", "Декабрь"};
  // string arr30[] = {"Сентябрь", "Июнь", "Апрель", "Ноябрь"}

  switch (a) {
    case 31: std::cout << "Январь, Март, Май, Июль ,Август, Октябрь, Декабрь" << '\n'; break;
    case 30: std::cout << "Сентябрь, Июнь, Апрель, Ноябрь" << '\n'; break;
    case 29 || "28": std::cout << "Февраль" << '\n'; break;
    default: std::cout << "/* Что-то не то */" << '\n'; break;
  }
}
