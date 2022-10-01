#include <iostream>

using namespace std;

int main()
{
  int a,b,c,d,v;
  a=650; // Константы
  b=5;// Константы
  cout << "Колличество ложек" << endl;
  cin >> c;
  cout << "Колличество дней" << endl;
  cin >> d;
  v=a-b*c*d; // Формула
  cout << v;
  return 0;
}
