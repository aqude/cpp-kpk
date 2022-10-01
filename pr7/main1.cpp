#include <iostream>
using namespace std;
int main() {
    const int sizeX = 4; // Г
    const int sizeY = 5; // В
    int count = 0;
    int arr[4][5]; // Размерность

    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            arr[i][j] =  -100 + rand() % (100 - -100 + 1); // Диапазон -20 - 20
            // cout << arr[i][j] << " ";
        }
        // cout << endl;

    }
    // Подсчет
    for (int i = 0; i < sizeX; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < sizeY; j++)
            {
                if (arr[i][j] < 0) {
                    count = count = arr[i][j];
                }
            }
        }
    }
    cout << count;

}
