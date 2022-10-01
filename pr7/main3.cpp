#include <iostream>

using namespace std;

int main() {
  const int size = 10;
  int arr[size][size];
  int count = 10;
  for (int i = 0; i < count; i++) {

    for (int j = 0; j < count; j++) {
      arr[i][j] = 0;
    }
  }

  for (int i = 0; i < count; i++) {

    for (int j = 0; j < count; j++) {
      if (i+j+1 > count){
        arr[i][j] = 1;
      }
    }
  }



  for (int i = 0; i < count; i++) {

    for (int j = 0; j < count; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}
