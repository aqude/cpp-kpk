#include <iostream>
using namespace std;
int ** Create( size_t n, size_t m ) {
    int ** M = new int * [n];
    for ( size_t i = 0; i < n; ++i ) {
        M[i] = new int [m];
    }
    return M;
}
void Free( int ** M, size_t n ) {
    for ( size_t i = 0; i < n; ++i ) {
        delete [] M[i];
    }
    delete [] M;
}
int random(int min, int max) {
    return min + rand() % (min - max + min + 1);
}

int main() {
  const int size = 7;
  int ** arr = Create(7, 7);
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
      if (i > j && i < size - 1 - j)
      {
        arr[i][j] = 0;
      } else {
        arr[i][j]= random(2, 111);
        if (arr[i][j] < min && arr[i][j])
        {
          min = arr[i][j];
        }
      }
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
    // Перебор матрицы и поиск минимального элемента которое не равно 0
    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        // if (arr[i][j] < min && arr[i][j] != 0)
        // {
        //   min = arr[i][j];
        // }
      }
    }

    cout << "Min = " << min << endl;
    Free(arr, size);

    return 0;
}
