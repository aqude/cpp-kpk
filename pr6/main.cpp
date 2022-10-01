#include <iostream>
#include <cmath>
using namespace std;

int averageGeometry(int x[], int size) {
  int total = x[0];
  for (int i = 1; i < size; i++) {
    if (x[i] > 0) total *= x[i];
  }
  return pow(total, (1/(double)size));
}

int main() {
  int size = 10;
  int arr[size]; // add massiv
  for (size_t i = 0; i < size; i++) {
    arr[i] = rand() % 50;
  }
6  for (size_t i = 0; i < size; i++) {
    cout << arr[i] << '\n';
  }
  cout << "filter arr" << '\n';
  int count = 0;
  for (size_t i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  // count
    cout << "count" << '\n';
  cout << count << '\n';
  // averageGeometry
  cout << "average Geometry" << '\n';
  cout << averageGeometry(arr, size) << '\n';
}
