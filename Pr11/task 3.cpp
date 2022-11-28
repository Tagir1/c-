#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 4;
    int n = 3;
    int arr[m][n];
    
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << "suma radka nomer " << i+1 << " dorivnue " << sum << endl;
    }
}
