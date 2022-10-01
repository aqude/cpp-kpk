#include <iostream>
using namespace std;
int main()
{
 char a;
 cin >> a;
 if (a == 'a' || a == 'A' ||
 a == 'e' || a == 'E' ||
 a == 'u' || a == 'U' ||
  a== 'O' || a == 'o' ||
 a == 'I' || a == 'i')
 {cout << " гласная" << endl;}
 else cout  << " согласная";

 return (0);
}
