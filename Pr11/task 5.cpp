#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 3;
    int n = 4;
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
    
    int max = arr[0][0];
    int maxnum = 0;
    int num = 0;
    
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            num++;
            if (arr[i][j] > max) 
            {
                max = arr[i][j]; maxnum = num; 
            }
        }
    }
    cout << "Naibilshe chislo: " << max << endl;
    cout << "Nomer chusla: " << maxnum << endl;
}
