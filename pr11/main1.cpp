#include <iostream>
#include <vector>
using namespace std; 
int counter = 0;
void print() {   
    cout << endl << " === " << counter++ << " === " << endl; 
}
int random(int min, int max) {
    return min + rand() % (min - max + min + 1);
}

int main() {
    const int n = 10;
    int nn;
    int arr[n][n];
    // заполнить матрицу случайными числами
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = random(1, 100);
    // вывести матрицу на экран
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    print();
    int size = n;
    
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (arr[i][j] % 2 != 0)
            {
                arr[i][j] = 0;    
            }
    // перенести нули в конец матрицы
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (arr[i][j] == 0)
            {
                for (int k = j; k < size - 1; k++)
                    arr[i][k] = arr[i][k + 1];
                arr[i][size - 1] = 0;
            }
    // вывести матрицу на экран
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
      delete[] arr[i];
    }
    delete[] arr;
    return 0;
}