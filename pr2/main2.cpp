#include <iostream>

using namespace std;

int main()
{int a,b,c,d,v, add;
  cout<<"Введите состав вашего класса!"<<endl;
  std::cin >> add;
  cout<<"Колличество отсутствующих на паре по уважительной причине"<<endl;
  b = rand() % add; // Ramdom int
  std::cout << b << '\n';
  cout<<b*2;
  cout<<" - ушей"<<endl;
  cout<<"Колличество призраков, которые должны быть на парах, но всегда отсутствуют"<<endl;
  a = rand() % 3;
  std::cout << a << '\n';
  cout<<a*2;
  cout<<" - ушей"<<endl;
  cout<<"Колличество отсутствующих на паре без уважительной причине"<<endl;
  d = rand() % add;
  std::cout << d << '\n';
  cout<<d*2;
  cout<<" - ушей"<<endl;
  cout<<"Колличество присутствующих"<<endl;
  c = rand() % add;
  std::cout << c << '\n';
  cout<<c*2;
  cout<<" - ушей"<<endl;
  v= (b+c+d+a)*2 + 2; // formula
  cout << "Всего: "<< v;
  return 0;
}
