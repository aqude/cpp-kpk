#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
  srand(time(0)); 
  int size = 500;
  double arrtime[size];
  int arr[50];
  for (int k = 0; k < size; k++) {
    for (int i = 0; i < 50; i++) {
      arr[i] = rand() % 10000 / 10 * 1111 * 231;
    }
    for (int i = 0; i < 50; i++) {
      std::cout << arr[i] << '\n';
    }
    cout << endl;

    cout << "runtime = " << clock()/1000.0 << endl;
    arrtime[k] = clock();
  }
  double sum = 0;
  for (double j : arrtime) {
    sum += j;
  }
  cout << sum /1000.0 / size << '\n';
  // delete [] arr;
  return 0;
}
