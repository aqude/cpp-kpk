#include <iostream>
using namespace std;
int main() {
  const int size = 7;
  int arr[size][size];
  int min = arr[0][0];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      arr[i][j] = 0;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Print "<< endl;
// нахождение дух соседних
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (i < j && i > size - 1 - j)
      {
        arr[i][j] = 1 + rand() % (1 - 9 + 1);
        if (min > arr[i][j])
        {
          min = arr[i][j];
        }
      } else {
          arr[i][j] = 0;
      }


        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
    cout << "Min: " << min << '\n';
}
