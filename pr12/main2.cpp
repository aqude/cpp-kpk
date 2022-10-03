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
int main()
{
    int ** a = Create(15, 2);
    //заполнение массива значениями
    int array[15];
    int max = -(1<<31);  //максимальная сумма элементов в соседних строках, по умолчанию наименьший int

    for (int i = 0; i < 15; i++) {
      for (int j = 0; j < 2; j++) {
        a[i][j] = rand() % 50;
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 15; i++) {
        int jmax = -(1<<31);  //максимум в строке, каждый раз становится минимальным int
        for (int j = 0; j < 2; j++) {
            if (a[i][j] > jmax)
                jmax = a[i][j];
        }
        array[i] = jmax;
    }
    for (int i = 0; i < 14; i++) {
        if (array[i]+array[i+1] > max) max = array[i]+array[i+1];
    }
    cout << "Max: " << max << endl;

    cout << "Your array: ";
    for (int i : array) {
      cout << i << " ";
    }
    Free(a, 15);
}
