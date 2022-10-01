#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main() {
      int c;
      cout<<  "Свободное время"<<endl;
      cout<<  "Выберите 1)Пинокио 2)Боку но Пико 3)Летнее время 4)Вверх 5)Вперед" <<endl;
      cin>> c ;
      string v;
      bool run = true;
      switch (c){
          run = false;
            case (1):
              cout<<"Вы уверены? / да, нет? ";
              std::cin >> v;
              if (v == "да") {
                std::cout << "Приятного просмотра!" << '\n';
                break;
              }
              else
              {
                std::cout << "Возвращайтесь еще!" << '\n';
                break;
              }

            case (2):
            cout<<"Вы уверены? / да, нет? ";
            std::cin >> v;
            if (v == "да") {
              std::cout << "Приятного просмотра!" << '\n';
              break;
            }
            else
            {
              std::cout << "Возвращайтесь еще!" << '\n';
              break;
            }

            case (3):
            cout<<"Вы уверены? / да, нет? ";
            std::cin >> v;
            if (v == "да") {
              std::cout << "Приятного просмотра!" << '\n';
              break;
            }
            else
            {
              std::cout << "Возвращайтесь еще!" << '\n';
              break;
            }
            case (4):
            cout<<"Вы уверены? / да, нет? ";
            std::cin >> v;
            if (v == "да") {
              std::cout << "Приятного просмотра!" << '\n';
              break;
            }
            else
            {
              std::cout << "Возвращайтесь еще!" << '\n';
              break;
            }
            case (5):
            cout<<"Вы уверены? / да, нет? ";
            std::cin >> v;
            if (v == "да") {
              std::cout << "Приятного просмотра!" << '\n';
              break;
            }
            else
            {
              std::cout << "Возвращайтесь еще!" << '\n';
              break;
            }
            default:
            cout<<"Ошибка  ";
            break;
            return 0;
      }

}
