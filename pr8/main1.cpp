#include <iostream>

using namespace std;

int main() {
  int count = 1;
  const int size = 5;
  int arr[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      arr[i][j] = 1 + rand() % (20 - 1 + 1);
      cout << arr[i][j] << " ";
    }

    cout << endl;
  }
  cout << endl;
    for (int i = 0; i < size; i++) {
      for (int j = 1; j < size; j+=2) {
        cout << arr[i][j] << " ";
        count = arr[i][j] * count;
      }
      cout << endl;
    }
  cout << endl;
  cout << count << '\n';
  return 0;
}
