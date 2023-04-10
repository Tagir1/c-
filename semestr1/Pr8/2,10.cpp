
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) 
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    
    if (n == 0 || n > 99)
    {
        cout << "Size of your number is too big"; 
        return 0;
    }
    
    cout << '+';
    for(int i = 0; i < n; i++)
    {
        cout << '-';
    }
        cout << '+' << endl;
    
    for(int i = 0; i < n; i++) 
    {
        cout << '|';
        for(int j = 0; j < n; j++)
        {
              cout << ' ';
        }
        cout << '|' << endl;
    }
    
    cout << '+';
    for(int i = 0; i < n; i++)
    {
        cout << '-';
    }
    cout << '+' << endl;
    
}
