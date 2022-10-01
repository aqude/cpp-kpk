#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main() {
      int c;
      cout<<  "Перед вами три дороги"<<endl;
      cout<<  "Выберите 1)Левая 2)Центральная 3)Правая"<<endl;
      cin>> c ;
      switch (c){

          case (1):
          cout<<"Ничего не найдешь. ";
          break;

          case (2):
         cout<<"Что-то найдешь!";
          return 0;

          case (3):
          cout<<"Вы уехали на Домбасс!";
          break;

          default:
           cout<<"Вы попали в аварию!";
          break;
      }

}
