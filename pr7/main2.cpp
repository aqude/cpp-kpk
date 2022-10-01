#include <iostream>
using namespace std;
int main() {
    const int sizeX = 20; // Г
    const int sizeY = 5; // В
    int sum[20];
    int maxsum[20];
    int count = 0;
    int arr[sizeX][sizeY]; // Размерность
    for (int i = 0; i < sizeX; i++)
    {
        sum[i] = 0;
    }
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            arr[i][j] = rand() % 50; // Диапазон 1 - 50
            cout << arr[i][j] << " ";
            sum[i] = sum[i] + arr[i][j];
        }
        cout << endl;

    }
    cout << endl;
    // Подсчет

    for (int i = 0; i < sizeX; i++)
    {
        maxsum[i] = sum[i] + sum[i+1];
    }

    for (int i = 0; i < sizeX; i++)
    {
        if (maxsum[0] > maxsum[i]) {
            maxsum[0] = maxsum[i];
        }
    }
    cout << maxsum[0];
}
