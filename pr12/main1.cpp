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

void Process( int ** M,int *Sum, size_t n, size_t m ) {
    for ( size_t i = 0; i < n; ++i ) {
        Sum[i] = 0;
        for ( size_t j = 0; j < m; ++j ) {
          if (M[i][j] < 0) {
            Sum[i] += 1;
          }

        }
    }
}

void Print( int ** M, size_t n, size_t m ) {
    for ( size_t i = 0; i < n; ++i ) {
        for ( size_t j = 0; j < m; ++j ) {
            std::cout<<M[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
}
int main()
{
  const int sizeX = 5;
  const int sizeY = 6;
  int ** arr = Create(sizeX, sizeY);
  int k = 0;
  int * a = new int [sizeX];


  for (int i = 0; i < sizeX; i++)
  {
    for (int j = 0; j < sizeY; j++)
    {
      arr[i][j] = random(-100, 100);
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  Process(arr, a, sizeX, sizeY);

  Print(arr, sizeX, sizeY);
  cout << "Результат" << endl;
  for (size_t i = 0; i < sizeX; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  delete[] a;
  Free( arr, sizeX );
  return 0;
}
