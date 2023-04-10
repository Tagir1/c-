#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 3;
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
    
    int livDiagnum = 2;
    int pravDiagnum = 0;
    int livDiagSum = 0;
    int pravDiagSum = 0; 
    
    for (int i = 0; i < 3; i++)
    {
        livDiagSum += arr[livDiagnum][i];
        pravDiagSum += arr[pravDiagnum][i];

        livDiagnum--;
        pravDiagnum++;
    }
    cout << "Suma livoi diagonali " << livDiagSum << endl;
    cout << "Suma pravoi diagonali " << pravDiagSum << endl;
}
