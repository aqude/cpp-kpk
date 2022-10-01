#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << " Введите возраст " << endl;
  cin >> a;
  if (a >= 18 && a <= 27) cout << "призыв или контракт" <<
  endl;
  else if (a >= 28 && a <= 59) cout << "контракт" << endl;
  else if (a > 59 && a < 100 || a < 18 && a > 0) cout << "непризывной возраст" << endl;
  else cout << "ошибка" << endl;
  return 0;
}
