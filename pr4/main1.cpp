#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int a,b;
    cout<< "Введите 1-ое число"<<endl;
  cin>> a;
   cout<<  "Введите 2-ое число"<<endl;
      cin>> b;
      int c;
      cout<<  "Выберите действие 1)+ , 2)- , 3)/ , 4)*"<<endl;
      cin>> c ;
      switch (c){
          case (1):
          cout<<a+b;
          break;
          case (2):
          cout<<a-b;
          break;
          case (3):
          cout<<a/b;
          break;
          case (4):
          cout<<a*b;
          break;
          default:
           cout<<"ошибка";
          break;
      }
  return 0;
}
