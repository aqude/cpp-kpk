#include <iostream>
using namespace std;
int main() {
  const int sizeI = 22;
  const int sizeJ = 2;
  int maxi = 1;
  int max[sizeI + sizeJ];
  int arr[sizeI][sizeJ];
  int array[22];
  for (int i = 0; i < sizeI; i++) {
    for (int j = 0; j < sizeJ; j++) {
      arr[i][j] = 1 + rand() % (50 - 1 + 1);
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "нахождение дух соседних "<< endl;
// нахождение дух соседних
  for (int i = 0; i < sizeI; i++) {
    for (int j = 1; j < sizeJ; j+=2) {
      if (max[0] < arr[i][j]) {
        max[0] = arr[i][j];
      }
    }
    array[i] = max[0];
  }
  cout <<"Max 1: " << max[0] << '\n';
  for (int i = 0; i < 21; i++) {
        if (array[i]+array[i+1] > maxi) maxi = array[i]+array[i+1];
    }
  cout <<"Max 2: " << max << '\n';
}
