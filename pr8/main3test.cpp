#include <iostream>
using namespace std;
int main()
{
    int a[22][2];
    //заполнение массива значениями
    int array[22];
    int max = -(1<<31);  //максимальная сумма элементов в соседних строках, по умолчанию наименьший int

    for (int i = 0; i < 22; i++) {
      for (int j = 0; j < 2; j++) {
        a[i][j] = rand() % 50;
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 22; i++) {
        int jmax = -(1<<31);  //максимум в строке, каждый раз становится минимальным int
        for (int j = 0; j < 2; j++) {
            if (a[i][j] > jmax)
                jmax = a[i][j];
        }
        array[i] = jmax;
    }
    for (int i = 0; i < 21; i++) {
        if (array[i]+array[i+1] > max) max = array[i]+array[i+1];
    }
    cout << "Max: " << max << endl;

    cout << "Your array: ";
    for (int i : array) {
      cout << i << " ";
    }
}
