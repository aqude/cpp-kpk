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
            arr[i][j] = random(-100, 100);
    // вывести матрицу на экран
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    print();
    // Упорядочить по убыванию элементы в строках которые содержат только положительные элементы
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
            if (arr[i][j] > 0)
                k++;
        if (k == n)
        {
            for (int j = 0; j < n; j++)
                for (int k = j; k < n; k++)
                    if (arr[i][j] < arr[i][k])
                        swap(arr[i][j], arr[i][k]);
        }
    }

    // вывести матрицу на экран
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // отчистить память
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    return 0;
}
