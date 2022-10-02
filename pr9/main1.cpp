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
    int n = 10;
    int &link_n = n; 
    int k = 0;
    vector <int> arr(10);
    for (int i = 0; i < link_n; i++)
    {
        arr[i] = random(-100, 100);
    }
    
    for (int i = 0; i < link_n; i++)
        if (arr[i] < 0)
        {
            for (int j = i; j > k; j--)  
            swap(arr[j],arr[j-1]);
            k++;
        }     
        
    for (int i = 1; i < n/2; i+=2)    
        swap(arr[i],arr[n-1-i]);
 
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
    cout << "\n";
}