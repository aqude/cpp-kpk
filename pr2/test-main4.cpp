#include <iostream>
using namespace std;
int main()
{
  int arr[5];
  std::cout << "print 5" << '\n';
  for (int i=0; i<5; i++)
  {
    std::cin >> arr[i];
  }
int max = 0;
// maax
  for (int i=1; i < 5; i++) {
    if(arr[0] < arr[i]) {
      arr[0] = arr[i];
      max = arr[0];
    }
  }
  std::cout << "max" << '\n';
  std::cout << arr[0] << '\n';
std::cout << "NOD" << '\n';
  for (int i = 0; i < 5; i++) {
    if (arr[i] % max == 0) {
      std::cout << max << '\n';
    }
    max--;
  }
}
